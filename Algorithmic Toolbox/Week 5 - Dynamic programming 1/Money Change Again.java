package com.company;
import java.util.Scanner;


public class Main {
    int CoinChange(int x , int[] coins){
        int[] solve = new int[x+1];
        solve[0] = 0;
        for(int i=1 ; i<=x ; i++){
            solve[i] = 1001;
            for(int c:coins){
                if (i-c>=0){
                    solve[i] = Math.min(solve[i] , solve[i-c]+1);
                }
            }
        }
        return solve[x];
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int[] coins = {1,3,4};
        Main obj = new Main();
        int sol = obj.CoinChange(x , coins);
        System.out.println(sol);
    }
}
