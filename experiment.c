//�����루����ԭ�ӱ��ʽ��
void function01(int x1,int x2){
    if(x1 > -5 && x1 < 20){
        printf("true");
    }else{
        printf("false");
    }
}
//����������ԭ�ӱ��ʽ��
void function02(int x1,int x2){
    if(x1 > 9 || x2 > 9){
        printf("true");
    }else{
        printf("false");
    }
}
//��ǣ�����ԭ�ӱ��ʽ��
void function03(int x1,int x2){
    if(x1 > -5 && !(x2 > 10)){
        printf("true");
    }else{
        printf("false");
    }
}
//��ǣ�����ԭ�ӱ��ʽ��
void function04(int x1,int x2){
    if(x1 > -5 || !(x1 > -10)){
        printf("true");
    }else{
        printf("false");
    }
}
//�����루����ԭ�ӱ��ʽ��
void function05(int x1,int x2,int x3){
    if(x1 > -5 && x1 + x2 < 10 && x2 + 2 * x3 <25){
        printf("true");
    }else{
        printf("false");
    }
}
//����������ԭ�ӱ��ʽ��
void function06(int x1,int x2,int x3){
    if(x1 - x2 > 10 || x2 - x1 > 10 || x3 < 5){
        printf("true");
    }else{
        printf("false");
    }
}
//���ǣ�����ԭ�ӱ��ʽ��
void function07(int x1,int x2,int x3){
    if(x1 - x2 > 10 && x2 - x3> 5 || !(x3 < 5)){
        printf("true");
    }else{
        printf("false");
    }
}
//�����루�ĸ�ԭ�ӱ��ʽ��
void function08(int x1,int x2,int x3,int x4){
    if(x1 - x2 > 10 && x2 - x3> 5 && x3 + x4 >4 && x4 == 1){
        printf("true");
    }else{
        printf("false");
    }
}
//�������ĸ�ԭ�ӱ��ʽ��
void function09(int x1,int x2,int x3,int x4){
    if(x1 - x2 > 10 || x3 > 5 || x4 == 0){
        printf("true");
    }else{
        printf("false");
    }
}
//������һ�����ĸ�ԭ�ӱ��ʽ��
void function10(int x1,int x2,int x3,int x4){
    if(x1 - x2 > 10 && x2 - x3> 5 || !(x3 < 5) && x4 - x3 > 0){
        printf("true");
    }else{
        printf("false");
    }
}
//������һ���루�ĸ�ԭ�ӱ��ʽ��
void function11(int x1,int x2,int x3,int x4){
    if((x1 - x2 > 10  || x1 > 10)&& (x2 - x3> 5 || !(x4 < 5))){
        printf("true");
    }else{
        printf("false");
    }
}
//�ĸ��루���ԭ�ӱ��ʽ��
void function12(int x1,int x2,int x3,int x4,int x5){
    if(x3 >= 5 && x2 - x3> 5 && x1 - x2 > 10 && 10 * x4 + x3 > 20 && x5 != 0){
        printf("true");
    }else{
        printf("false");
    }
}
//�ĸ������ԭ�ӱ��ʽ��
void function13(int x1,int x2,int x3,int x4,int x5){
    if(x1 - x2 < 10 || x1 + x2 > 20 || x3 - x4 > 5 || x3 + x4 < 15 || x5 == 0 ){
        printf("true");
    }else{
        printf("false");
    }
}
//һ�������������ԭ�ӱ��ʽ��
void function14(int x1,int x2,int x3,int x4,int x5){
    if((x1 - x2 - 2 * x3 == 0 && x2 - x3 == 5) || (x3  + x4 < -5 || x3 + x4 > 5 || x5 == 0)){
        printf("true");
    }else{
        printf("false");
    }
}
//���������������ԭ�ӱ��ʽ��
void function15(int x1,int x2,int x3,int x4,int x5){
    if((x1 - x2 > 10 || x1 - x2 < 0) && (x3 - x4 > 5 || x3  < 0) && !(x5 == 0)){
        printf("true");
    }else{
        printf("false");
    }
}
//������һ�������ԭ�ӱ��ʽ��
void function16(int x1,int x2,int x3,int x4){
    if(x1 - x2 > 10 && x1 > 5 || x2 - x3 > 10 && x3 > -5 && x3 != 0){
        printf("true");
    }else{
        printf("false");
    }
}
//����루����ԭ�ӱ��ʽ��
void function17(int x1,int x2,int x3,int x4){
    if(x1 + x2 < 20 && x1 - x2 > 5 && x1 != 0 && x2 != 0 && x1 == x3 && x3 == 10){
        printf("true");
    }else{
        printf("false");
    }
}
//���������ԭ�ӱ��ʽ��
void function18(int x1,int x2,int x3,int x4){
    if(x1 > 10 || x2 > 10 || !(x1 + x2 < 0) || x3 < 0 || x4 < 0 || !(x3 + x4 > 10)){
        printf("true");
    }else{
        printf("false");
    }
}
//�ĸ���һ��������ԭ�ӱ��ʽ��
void function19(int x1,int x2,int x3,int x4,int x5, int x6){
     if((x2 > 5 && x1 - x2 > 10) && ( x4 == 0 || x3 + 2 * x4 == 10) && (!(x5 * 2 < 4) && x6 != 0)){
        printf("true");
    }else{
        printf("false");
    }
}
//����������������ԭ�ӱ��ʽ��
void function20(int x1,int x2,int x3,int x4){
    if((x1 > 10 && x2 > 5)|| (x3 > 5 && x4 > 10) || (x1 +x2 + x3 + x4 == 10 && x1!= 0)){
        printf("true");
    }else{
        printf("false");
    }
}
//����������������ԭ�ӱ��ʽ��
void function21(int x1,int x2,int x3,int x4){
    if((x1 < -10 || x1 > 5) && (x2 - x3 < -5 || x2 - x3 > 10) && (x2 > 0 || x3 < 0)){
        printf("true");
    }else{
        printf("false");
    }
}
//һ�����ĸ�������ԭ�ӱ��ʽ��
void function22(int x1,int x2,int x3,int x4){
    if((x1 > 0 && x1 < x2) || x1 < 0 || x1 > x2 || x3 > 0 || x4 > 0){
        printf("true");
    }else{
        printf("false");
    }
}

//һ������
void function23(int x1,int x2){
    if(x1 > 10 && x1 < 20){
            if(2 * x2 + 5 < 11){
                printf("true");

            }
    }else{
        printf("false");
    }
}
//һ������
void function24(int x1,int x2){
    if(x2 == 0){
            if(x1 -x2 > 5 || x1 == 10){
                printf("true");

            }
    }else{
        printf("false");
    }
}
//һ������
void function25(int x1,int x2,int x3,int x4){
    if(x1 - x2 > 10 && x2 - x3> 5 || !(x3 < 5)){
            if(x4 == x1 + x2 + x3){
                printf("true");
            }
    }else{
        printf("false");
    }
}
//һ���ĸ�
void function26(int x1,int x2,int x3,int x4){
    if(x1 - x2 > 10 && x2 - x3> 5 || !(x3 < 5) && x4 == 1){
        if(x4 == x1 + x2 + x3){
                printf("true");
        }
    }else{
        printf("false");
    }
}
//һ�����
void function27(int x1,int x2,int x3,int x4){
    if(x1 - x2 > 10 && x1 > 5 || x2 - x3 > 10 && x3 > -5 && x3 != 0){
        if(x3 == 10){
                printf("true");
        }
    }else{
        printf("false");
    }
}
//һ������
void function28(int x1,int x2,int x3,int x4){
    if((x1 > 10 && x2 > 5)|| (x3 > 5 && x4 > 10) || (x1 +x2 + x3 + x4 == 10 && x1!= 0)){
        if(x3 == 1){
                printf("true");
        }
    }else{
        printf("false");
    }
}
//һ��һ������
void function29(int x1,int x2,int x3){
    if(x1 > 0){
        if(x2 == 10){
            if(x1 - 2 * x2 > -5 && x3 != 0){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//һ��һ������
void function30(int x1,int x2,int x3,int x4){
    if(x1 > 0){
        if(x2 == 10){
            if(x1 - 2 * x2 > -5 && x3 + x4 > 5 && !(x4 < 0)){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//һ��һ������
void function31(int x1,int x2,int x3,int x4){
    if(x1 > 0){
        if(x1 + x2 == 10){
            if(x2 > -5 || x1 != 0){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//һ��һ���ĸ�
void function32(int x1,int x2,int x3,int x4){
    if(x1 > 0){
        if(x2 == 10){
            if((x1 - x2 > 10  || x1 > 10)&& (x2 - x3> 5 || !(x4 < 5))){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//һ����������
void function33(int x1,int x2,int x3,int x4){
    if(x1 > 0){
        if(x1 == 10 || x2 == 10){
            if(x2 - x3> 5 || !(x4 < 5)){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//һ����������
void function34(int x1,int x2,int x3,int x4){
    if(x1 > 0){
        if(x1 == 10 && x2 < 5){
            if((x1 - x2 > 10  || x1 > 10) && x2 - x3> 5){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//һ�������ĸ�
void function35(int x1,int x2,int x3,int x4){
    if(x1 > 0){
        if(x1 == 10 && x2 < 5){
            if((x1 - x2 > 10  || x1 > 10)&& (x2 - x3> 5 || !(x4 < 5))){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//һ����������
void function36(int x1,int x2,int x3,int x4){
    if(x1 > 0){
        if(x2 > -10 || x2 < 10 || x3 == 0){
            if(x2 == x1 + x3 || x1 == x2 + x3 || x3 == x1 + x2){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//��������
void function37(int x1,int x2,int x3){
    if(x1 > 1 && x2 > 1){
            if(x1 < x2 && x1 > 5 && x3 > x2){
                printf("true");
            }
    }else{
        printf("false");
    }
}
//�����ĸ�
void function38(int x1,int x2,int x3,int x4){
     if(x1 > 1 && x2 > 1){
            if(x1 < x2 && x1 > 5 && x3 > x2 && x4 > x3){
                printf("true");
            }
    }else{
        printf("false");
    }
}
//������������
void function39(int x1,int x2,int x3,int x4){
    if(x1 > 0 && x1 > x2){
        if(x2 > -10 || x2 < 10 || x3 == 0){
            if(x2 == x1 + x3 || x1 == x2 + x3 || x3 == x1 + x2){
                 printf("true");
            }
        }
    }else{
        printf("false");
    }
}
//�����ĸ�
void function40(int x1,int x2,int x3,int x4){
     if(x1 > 1 && x2 > 1 && x3 > 1){
            if(x1 < x2 && x1 > 5 && x3 > x2 && x4 > x3){
                printf("true");
            }
    }else{
        printf("false");
    }
}
//���
void function41(int x1){
    if((x1 > 10 && x1 < 20) || (x1 > -10 && x1 < 0) || (x1 > -30 && x1 < -20)){
        printf("true");
    }else{
        printf("false");
    }
}
//����
void function42(int x1,int x2,int x3){
    if(x1 - x2 > 10 &&!(x2 - x3> 5 || !(x3 < 5))){
        printf("true");
    }else{
        printf("false");
    }
}
//����
void function43(int x1,int x2){
    if(x1 - x2 > 10 && x1 > 0 && x2 > x1){
        printf("true");
    }else{
        printf("false");
    }
}
//�ĸ�
void function44(int x1,int x2,int x3){
    if(x1 > 10 && x2 > 10 || x1 < -10 && x3 > 10){
        printf("true");
    }else{
        printf("false");
    }
}
//����
void function45(int x1,int x2,int x3,int x4){
    if(x1 > x2 && x2 == 5){
        printf("true");
    }else{
        printf("false");
    }
}
void function46(int x1,int x2,int x3){

    if(x1 > -5 && x1 < 5 || x2 + x3 > 10 && !(x1 + 2 * x2 < 5)){
            if(x1 < -10)
                printf("true");
    }else{
        printf("false");
    }
}
void function47(int x1,int x2,int x3,int x4){
    if(x1 > x2 + x3 + x4 && x2 > 0 && x3 > 0 && x4 > 0){
        printf("true");
    }else{
        printf("false");
    }
}
void function48(int x1,int x2,int x3,int x4){
    if(x1 == 0){
        if(x1 > -5 && x1 < 5 || !(x2 > -10 && x2 < 5) || x1 == 3){
            if(x2 < 20){
                printf("true");
            }
        }
    }
}
void function49(int x1,int x2,int x3,int x4){
    if(x1 - x2 > 10 && x2 - x3> 5 || !(x3 < 5)){
            if(x1 == 10 || x2 == 10){
                if(x3 != 0){
                    printf("true");
                }
            }

    }
}
void function50(int x1,int x2){
    if(x1 > 10 && x2 < 12){
        printf("true");
    }else{
        printf("false");
    }
}
//һ����������
void function51(int x1,int x2,int x3,int x4){
    if(x1 == 10 || x1 == -10){
            if((x1 - x2 > 10  || x1 > 10) && x1 == -10){
                 printf("true");
            }
    }else{
        printf("false");
    }
}
void function52(int x1,int x2,int x3){
    if(x2 > 10 && x1 - x2 < 10 || x3 < -10&&x1 -x3<10){
    }else{
        printf("false");
    }
}
