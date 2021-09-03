import java.util.*;
import java.io.*;

public class Main {

    public int IsBalanced(String s){
        int n = s.length();
        if(n==1){
            return 0;
        }
        Stack<Character> p = new Stack();
        int res=0;
        for (int i=0 ; i<n ; i++){
            char t = s.charAt(i);
            switch (t){
                case '(' : case '{' : case '[':
                    p.push(t);
                    break;
                case ')' : case ']': case '}' :
                    if (p.isEmpty()){
                        return i+1;
                    }
                    else if (t == ')'){
                        if(p.peek()=='(') p.pop();
                        else res = i+1;
                    }
                    else if (t == '}'){
                        if(p.peek()=='{') p.pop();
                        else res = i+1;
                    }
                    else if (t == ']'){
                        if(p.peek()=='[') p.pop();
                        else res = i+1;
                    }
                    break;
            }
        }
        if(p.isEmpty()){
            return 1;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Main obj = new Main();
        String s = input.nextLine();
        int res = obj.IsBalanced(s);
        if(res==0) System.out.println(1);
        else if(res == 1) System.out.println("Success");
        else System.out.println(res);
    }
}
