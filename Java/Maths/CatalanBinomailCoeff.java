class Innoskrit {
	static long binomailCoeff(int n, int k)
	{

		long res = 1;

		if(k > n - k) {
			k = n - k;
		}

		for(int i = 0; i < k; i++) {
			res *= (n - i);
			res /= (i + 1);
		}

		return res;
	}

	static long catalan(int n) {
		long coeff = binomailCoeff(2 * n, n);
		return coeff/(n+1);
	}
	
	public static void main(String args[])
	{
		int n = 20;
        System.out.println(catalan(n));
	}
}