class Innoskrit {
	public static void main (String[] args) {
        int a = 189, b = 6;
        while(a != b) {

            if(a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }

        System.out.println(a);

	}
}


