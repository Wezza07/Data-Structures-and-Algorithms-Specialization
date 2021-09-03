import java.util.*;
import java.io.*;

public class Main {

    public int IsBalanced(String s){
        int n = s.length();
        if(n==1){
            return 0;
        }
        if(s.charAt(0) == ')' || s.charAt(0) == ']' || s.charAt(0) == '}') return 0;
        Stack<Character> B = new Stack();
        Stack<Integer> index = new Stack();
        int res=0;
        for(int i=0 ; i< n; i++){
            char t = s.charAt(i);
            switch (t){
                case '(' : case '{' : case '[':
                    B.push(t);
                    index.push(i+1);
                    break;
                case ')' : case ']': case '}' :
                    if (B.isEmpty()) return i+1;
                    else if(B.peek()=='(' && t == ')'){
                        B.pop();
                        index.pop();
                    }
                    else if(B.peek()=='[' && t == ']'){
                        B.pop();
                        index.pop();
                    }
                    else if(B.peek()=='{' && t == '}'){
                        B.pop();
                        index.pop();
                    }else return i+1;
                    break;
            }
        }
        if(B.isEmpty()) return -2;
        return index.peek();
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Main obj = new Main();
        String s = input.nextLine();
        int res = obj.IsBalanced(s);
        if(res==0) System.out.println(1);
        else if(res == -2) System.out.println("Success");
        else System.out.println(res);
    }
}
