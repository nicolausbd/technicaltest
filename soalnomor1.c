/******************************************************************************

Nicolaus Bagas Denta
Test Technical Online Bootcamp Batch 18 Kloter 3 DumbWays.id
Soal Nomor 1

*******************************************************************************/
#include <stdio.h>
int main() {
	
	int v1,v2,v3,t1,t2,t3,s1,s2,s3,t1detik,t2detik,ttotal,h,m,s,detik;
	float jarakKM,jarakMeter;
	printf("Masukkan Jarak Tempuh Total Ismail dalam Kilometer: ");
	scanf("%f",&jarakKM);
//mengubah jarak satuan KM menjadi Satuan Meter
	jarakMeter=jarakKM*1000;
//---------------------------------------	
	printf("Jarak Total dalam Meter:  %.1f \n", jarakMeter);//%.1f membuat desimal menjadi satu angka dibelakang koma
	printf("Masukkan Nilai Waktu Tempuh Ismail selama Kecepatan Pertama(menit)  : ");
	scanf("%d",&t1);
	printf("Masukkan Nilai Waktu Tempuh Ismail selama Kecepatan Kedua(menit)    : ");
	scanf("%d",&t2);
//Mengubah Satuan Waktu Menit Menjadi Detik 	
	t1detik=t1*60;
	t2detik=t2*60;
//---------------------------------------
	printf("Waktu Tempuh Ismail(t1) dalam Detik: %d\n",t1detik);
	printf("Waktu Tempuh Ismail(t2) dalam Detik: %d\n",t2detik);
	printf("Masukkan Nilai Kecepatan Pertama Ismail(m/s): ");
	scanf("%d",&v1);
	printf("Masukkan Nilai Kecepatan Kedua Ismail(m/s)  : ");
	scanf("%d",&v2);
	printf("Masukkan Nilai Kecepatan Ketiga Ismail(m/s) : ");
	scanf("%d",&v3);
//menggunakan rumus dasar S=VxT untuk mencari jakar, waktu dan kecepatan
	s1=t1detik*v1;
	s2=t2detik*v2;
	s3=jarakMeter-(s1+s2);
	t3=s3/v3;
	ttotal=t1detik+t2detik+t3;
//---------------------------------------
    printf("Nilai Jarak Tempuh Pertama (s1) = %d\n",s1);
    printf("Nilai Jarak Tempuh Kedua (s2)   = %d\n",s2);
    printf("Mencari Jarak Tempuh Ketiga dengan rumus, s3=stotal-(s1+s2)\n");
    printf("Nilai Jarak Tempuh Ketiga (s3)  = %d\n",s3);
    printf("Mencari Nilai Waktu Tempuh Ketiga dengan Rumus, t3=s3/v3\n");
    printf("Nilai Waktu Tempuh Ketiga (t3)  = %d\n",t3);
    printf("Jadi Ismail Menempuh Jarak 64.5km selama (detik) = %d\n",ttotal);
    
    printf("Masukkan Waktu Total Tempuh Ismail(detik) untuk diubah kedalam format Jam:Menit:Detik = ");
	scanf("%d",&detik);
//Memberikan Rumus untuk Mengubah Satuan Detik Menjadi Format Jam:Menit:Detik
    h = (detik/3600); 
	
	m = (detik -(3600*h))/60;
	
	s = (detik -(3600*h)-(m*60));
	
	printf("Jam:Menit:Detik - %d:%d:%d\n",h,m,s);
    
	return 0;
}
