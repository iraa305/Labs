import java.io.*;
import org.pstu.hello.*;
public class test {
	public static void main(String[] args) {
	
		Cat cat = new Cat();
		cat.setName("chuwi");
		System.out.print("Cat name: " + cat.getName());
		
		
		System.out.print("Enter string: ");
	    BufferedReader br =
			new BufferedReader (
			  new InputStreamReader (System.in));
		String str = null;
	try {
		str = br.readLine();
	}
	catch (Exception e) {
		System.out.println(e);
	}
	System.out.println("You enter: " + str);
	}
}
