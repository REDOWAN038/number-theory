import java.util.*;
import java.math.*;


public class GCD{
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
	
	
		String s1 = input.next();
		String s2 = input.next();
		
		BigInteger num1 = new BigInteger(s1);
		BigInteger num2 = new BigInteger(s2);
		
		BigInteger result = num1.gcd(num2);
		
		System.out.println("GCD : "+result);
	}
}