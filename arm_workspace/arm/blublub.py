import math


class BigBoi:
    l_s = 0.2
    l_e = 0.2

    Kp = 98767876

    MAX_OUTPUT = 5

    def __init__(self):
        self.encoder_history = []

    def IK(self, px, py):
        r = (px **2 + py ** 2) ** 0.5
        theta = math.atan2(py, px)

        # angle btw origin-end and origin-joint
        phi = math.acos((self.l_s ** 2 + r ** 2 - self.l_e ** 2) / (2 * self.l_s * r))
        # always +ve

        q_s = theta + phi
        q_e = math.acos((self.l_s ** 2 + self.l_e ** 2 - r ** 2) / (2 * self.l_s * self.l_e))

        return q_s, q_e

    def K(self, q_s, q_e):
        px = self.l_s * math.cos(q_s) + self.l_e * math.cos(q_e)
        py = self.l_s * math.sin(q_s) + self.l_e * math.sin(q_e)

        return px, py

    def PIDs(self, q_s, q_e, a_s, a_e):
        """
        :param q_s: ideal shoulder angle
        :param q_e: ideal elbow angle
        :param a_s: real shoulder angle
        :param a_e: real elbow angle
        :return:
        """

        Q = [q_s, q_e]
        A = [a_s, a_e]

        to_return = []

        for q, a  in zip(Q, A):
            e = q - a

            output = e * self.Kp

            rev = output < 0

            output = abs(output)

            if output > self.MAX_OUTPUT:
                output = self.MAX_OUTPUT

            to_return.append((output, rev))

        return tuple(to_return)



bb = BigBoi()

asdf1, asdf2 = bb.PIDs(0, 0, 2, -2)

print(asdf1, asdf2)