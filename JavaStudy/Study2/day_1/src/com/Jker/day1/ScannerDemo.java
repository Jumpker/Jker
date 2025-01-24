package com.Jker.day1;
import java.util.Scanner;

public class ScannerDemo{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("请输入一个整数: ");
        int num = sc.nextInt();
        System.out.println("你输入的整数是: " + num);
    }
}
