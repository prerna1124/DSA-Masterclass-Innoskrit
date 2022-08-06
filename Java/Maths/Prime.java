class Innoskrit {
	public static void main (String[] args) {
		int b = 7;
		boolean isPrime = true;

		for(int i = 2; i < Math.sqrt(b); i++) {
			if(b % i == 0) {
				isPrime = false;
				break;
			}
		}
	    
	    System.out.println(isPrime);
        
	}
}
