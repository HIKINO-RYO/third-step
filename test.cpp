#include<stdio.h>
#include<math.h>
#define MAX 1000
double d[MAX];

void quick_sort(int le, int ri) {
	int i, j, k;
	double pivot, tmp;

	if (le == ri) { return; }
	k = (le + ri) / 2;
	pivot = d[k];
	i = le;
	j = ri;
	while (i <= j) {
		while (d[i] < pivot) { i++; }
		while (d[j] > pivot) { j--; }
		if (i >= j) { break; }
		tmp = d[i];
		d[i] = d[j];
		d[j] = tmp;
		i++;
		j--;
	}
	if (le < i - 1) { quick_sort(le, i - 1); }
	if (ri > j + 1) { quick_sort(j + 1, ri); }
}

int main() {
	double science[20] = { 65.0,80.0,67.0,35.0,58.0,60.0,72.0,75.0,68.0,92.0,36.0,50.0,2.0,58.5,46.0,42.0,78.0,62.0,84.0,70.0 };
	double math[20] = { 44.0, 87.0, 100.0, 63.0, 52.0, 60.0, 58.0, 73.0, 55.0, 86.0, 29.0, 56.0, 89.0, 23.0, 65.0, 84.0, 64.0, 27.0, 86.0, 84.0};
	double sum = 0.0;
	double ave = 0.0;
	double dev = 0.0;
	double dis = 0.0;
	double sdev = 0.0;
	double Dval[20] = { 0.0 };

	for (int i = 0; i < 20; i++) {
		sum += science[i];
	}
	ave = sum / 20.0;

	printf("理科合計点：%.1lf\n", sum);
	printf("理科平均点：%.1lf\n", ave);
	
	for (int i = 0; i < 20; i++) {
		dev += (science[i] - ave)*(science[i] - ave);
	}
	dis = dev / 20.0;
	sdev = sqrt(dis);
	printf("理科標準偏差：%.1lf\n", sdev);

	for (int i = 0; i < 20; i++) {
		Dval[i] = ((10.0*(science[i] - ave)) / sdev) + 50.0;
	}
	printf("理科偏差値:");
	for (int i = 0; i < 20; i++) {
		printf("%.1lf ",Dval[i]);
	}
	printf("\n\n");


	sum = 0.0;
	dev = 0.0;
	for (int i = 0; i < 20; i++) {
		sum += math[i];
	}
	ave = sum / 20.0;

	printf("数学合計点：%.1lf\n", sum);
	printf("数学平均点：%.1lf\n", ave);

	for (int i = 0; i < 20; i++) {
		dev += (math[i] - ave)*(math[i] - ave);
	}
	dis = dev / 20.0;
	sdev = sqrt(dis);
	printf("数学標準偏差：%.1lf\n", sdev);
	
	for (int i = 0; i < 20; i++) {
		Dval[i] = ((10.0*(math[i] - ave)) / sdev) + 50.0;
	}
	printf("数学偏差値:");
	for (int i = 0; i < 20; i++) {
		printf("%.1lf ", Dval[i]);
	}
	printf("\n\n");

	//理科ソート
	printf("理科点数(降順)：");
	for (int i = 0; i < 20; i++) {
		d[i] = science[i];
	}
	
	quick_sort(0, 20);
	
	for (int i = 20; i > 1; i--) {
		printf("%.1lf, ",d[i]);
	}
	printf("%.1lf \n\n", d[1]);
	
	//数学ソート
	printf("数学点数(降順)：");
	for (int i = 0; i < 20; i++) {
		d[i] = math[i];
	}

	quick_sort(0, 20);

	for (int i = 20; i > 1; i--) {
		printf("%.1lf, ", d[i]);
	}
	printf("%.1lf \n", d[1]);

	return 0;
}
