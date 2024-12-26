class UserMainCode(object):
    @classmethod
    def isMagicalNumber(cls, input1):
        magical_count = 0
        for num in range(1, input1 + 1):
            binary_rep = bin(num)[2:]
            modified_binary = ''.join('1' if ch == '0' else '2' for ch in binary_rep)
            digit_sum = sum(int(digit) for digit in modified_binary)
            if digit_sum % 2 == 1:
                magical_count += 1
        return magical_count

if __name__ == "__main__":
    input1 = int(input())
    result = UserMainCode.isMagicalNumber(input1)
    print(result)
