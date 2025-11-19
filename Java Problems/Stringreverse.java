class Stringreverse{
	public static void main(String args[]){
		String str = "Reverse This";
		System.out.println("Original String : "+str);
		System.out.println("Original String Length : "+str.length());
		
		System.out.println("Reversed String is : ");
		
		for(int i= str.length() - 1; i >= 0 ;i--){
			System.out.print(str.charAt(i));
		}
		System.out.println();
		
	}
}
