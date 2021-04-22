package day4;

public class Person {

	    final int YOUNG_MAX = 12;
	    final int TEEN_MIN = 13;
	    // interesting definition of "teen"...
	    final int TEEN_MAX = 17;

	    int age;

	    public Person(int initialAge) {
	        if (initialAge < 0) {
	            System.out.println("Age is not valid, "
	                + "setting age to 0.");
	            age = 0;
	        } else {
	            age = initialAge;
	        }
	    
	    }
	    public void amIOld() {
	        String answer;

	        if (age <= YOUNG_MAX) {
	            answer = "You are young.";
	        } else if (TEEN_MIN <= age && age <= TEEN_MAX) {
	            answer = "You are a teenager.";
	        } else {
	            answer = "You are old.";
	        }

	        System.out.println(answer);
	    }

	    public void yearPasses() {
	        age++;
	    }

	}