#include <stdio.h>
// convert miles to meters 
void length() {
	float res, l1, w=1.00;
	scanf_s("%f", &l1);
	res = l1 * 1609.34;
	printf("Here is your result (meters): %.2f", res);
	
}
// convert fahrenheit to celsius 
void temperature() {
	float res, t1;
	scanf_s("%f", &t1);
	res = (t1 - 32) * 0.56;
	printf("Here is your result (celsius): %.2f", res);
}
// convert cubic inch to liters 
void volume() {
	float res, v1;
	scanf_s("%f", &v1);
	res = v1 / 61.024; 
	printf("Here is your result (liters): %.2f", res);
}
// convert lbs(pounds) to kg
void mass() {
	float res, m1;
	scanf_s("%f", &m1);
	res = m1 / 2.205;
	printf("Here is your result (kg): %.2f", res);
}

int main(void) {
	int opt;
	

	printf("Greetings. Here you can convert some values.\nPlease choose some number which is necessery:\n");
	printf("1.Convert length\n2.Convert temperature\n3.Convert volume\n4.Convert mass");

	printf("\nEntere chosen nuber here >");
	scanf_s("%d", &opt);

	if (opt == 1) {
		printf("Enter miles > ");
		length();
	}
	else if (opt==2) {
		printf("Enter fahrenheit > ");
		temperature();
	}
	else if (opt==3) {
		printf("Enter cubic inch > ");
		volume();
	} 
	else {
		printf("Enter lbs(pounds) > ");
		mass();
	}



	return 0;
}