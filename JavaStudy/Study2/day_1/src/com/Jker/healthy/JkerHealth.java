package com.Jker.healthy;
import java.util.Scanner;

public class JkerHealth {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("请输入您的姓名: ");
        String name = sc.next();

        System.out.print("请输入您的性别: ");
        String sex = sc.next();

        System.out.print("请输入您的年龄: ");
        byte age = sc.nextByte();

        System.out.print("请输入您的身高(整数, cm): ");
        short height = sc.nextShort();

        System.out.print("请输入您的体重(小数, kg): ");
        float weight = sc.nextFloat();

        System.out.print("请输入您的活动级别(0~5, 0为久坐, 5为高度活动): ");
        byte activeLevel = sc.nextByte();

        System.out.println("\n输入完成! 请检查以下信息是否有误: ");
        System.out.println("姓名: "+ name);
        System.out.println("性别: "+ sex);
        System.out.println("年龄: "+ age + " 岁");
        System.out.println("身高: "+ height + " cm");
        System.out.println("体重: "+ weight + " kg");
        System.out.println("活动级别: "+ activeLevel);
    }
}
