def binomialCoeff(n, k):

	res = 1
	if k > n - k:
		k = n - k

	for i in range(0, n):
		res *= (n - i)
		res /= (i + 1)

	return res

def catalan(n):
	coeff = binomialCoeff(2 * n, n)
	return coeff / (n + 1)

if __name__ == '__main__':
	n = 20
	print(catalan(n))