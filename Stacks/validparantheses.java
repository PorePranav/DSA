import java.util.*;

public class Main
{
	public static void main(String[] args) {
		String s1 = "{{{()}}}";
		System.out.println("s1: " + s1 + ": " + isValid(s1));
	}
	
    public static boolean isValid(String s){
        Stack<Character> stack = new Stack<>();

        for(char ch: s.toCharArray()){
            switch (ch){
                case '(':
                case '{':
                case '[':
                    stack.push(ch);
                    break;

                case ')':
                    if(stack.isEmpty() || stack.pop() != '(')
                        return false;
                    break;

                case '}':
                    if(stack.isEmpty() || stack.pop() != '{')
                        return false;
                    break;

                case ']':
                    if(stack.isEmpty() || stack.pop() != '[')
                        return false;
                    break;
            }
        }

        if(stack.isEmpty())
            return true;
        else
            return false;
    }
}
