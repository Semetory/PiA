#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define N 10
#define V 100
#define Tn 2

float MAssa() {

    float temp;
    float Tems[N];
    float A[N];
    float sum = 0;

    for (int i = 0; i < N; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        Tems[i] = temp;
        A[i] = temp;
    }

    for (int i = 0; i < N; i++) {
        Tems[i] = pow(Tems[i], 2);
        sum += Tems[i];
    }
    for (int i = 0; i < 9; i++) printf("%d | [%1.f] | [%1.f]\n", i, A[i + 1], Tems[i + 1]);

    printf("������� �������������� ��������� ��������: %2.f", sum / N);
}

float Ans() {

    float y = 0;    //4
    float Tw[V];
    /*
    *       float x = 0;    //2
    *       float Zx;
            puts("��������� ����� �� ����� ��������� 2");
            scanf("%f",&Zx);

            if (Zx <= 2)x = Zx;
            else puts("��������� �������� �� ���������, ���� ������� �� ���������� �����");

            y = pow(2, x) - 2 * pow(x, 2) - 1;

            for (int i = 0; i < V; i++) {
                Tw[i] = y;
                printf("a[%d] = %2.1f\n", i + 1, Tw[i]);
            }
    */

    //float x = 0;    //2
    float sum = 0;
    float c = 0;
    //float VPlis = sum; //������������� ������� ������ �� �����/������������ ��������
    float VMis = 0;  //������������� ������� ������ �� �����/������������ ��������
    //int Crp = c; //����������� ������������� �����
    float Cro = 0; //���������� ������������� �����

    for (int i = 0; i < V; i++) {
        y = pow(2, i) - 2 * pow(i, 2) - 1;
        Tw[i] = y;
        //printf("a[%d] = %2.1f\n", i + 1, Tw[i]);
    }

    for (int i = 0; i < V; i++) { //������ �������������� �������� _ � _ ������������� ������� ������ �� �����/������������ ��������

        Tw[i] = pow(2, i) - 2 * pow(i, 2) - 1;

        if (Tw[i] > 0) {
            c++;
            sum += Tw[i];
        }
    }

    for (int i = 0; i < V; i++) { //������������� ������� ������ �� �����/������������ ��������

        Tw[i] = pow(2, i) - 2 * pow(i, 2) - 1;

        if (Tw[i] < 0) {
            Cro++;
            VMis += Tw[i];
        }
    }

    //printf("\n������ �������������� �������� = %2.1f", sum/c);

    puts("�����������:|��� �������|����������� ������������� ��������|����������� ������������� ��������\n|����� ������������|������������ ���������|������� ��������|");
    printf("|Tw|%2.1f|%2.1f|%2.1f|%2.1f|%2.1f|", sum, VMis, c, Cro, sum / c);

}

float iNdiv() {

    float Re = 0;
    float temp;
    float PZe = 0;
    float FZp= 0;
    float Fer = 0; //������
    float Las[Tn]; //���������

    float R[Tn];

    puts("������� ��� ��������");
    for (int i = 0; i < Tn; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%f",&temp);
        R[i] = temp;
    }
    for (int i = 0; i < Tn; i++) {
        if (R[i] < 0) {
            R[i] = PZe;
            PZe *= FZp;
        }
    }
    printf("%2.1f", FZp);

}


void main() {

    int pG;

    setlocale(LC_CTYPE, "RUS");
    puts("������� ����� ������������ �������");
    scanf("%i",&pG);

    if (pG == 1) MAssa();
    if (pG == 2) Ans();
    if (pG == 3) iNdiv();

}
