package com.Jker.day1;
import java.util.Scanner;

public class HeartRate {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("获取用户年龄...");
        byte age = sc.nextByte();
        short max_heart_rate = (short) (220 - age);
        //计算燃脂心率
        double best_min_heart_rate = max_heart_rate * 0.6;
        double best_max_heart_rate = max_heart_rate * 0.8;
        System.out.println("用户燃脂心率范围为: "+best_min_heart_rate+" ~ "+best_max_heart_rate);
    }
}
