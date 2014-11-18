#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int compare(int kode)
{
                if(kode == 01)
                    printf("Jurusan \t: Sistem Informasi\n");
                else if(kode == 02)
                    printf("Jurusan \t: Teknik Informatika\n");
                else if (kode == 03)
                    printf("Jurusan \t: Sistem Komputer\n");
}

main()
{
    int i,n;
    char f;
    int nomormenu;

    printf("\t\tIdentitas Diri Mahasiswa Universitas Sriwijaya\n\n");
    printf("\n\nMasukkan banyak identitas mahasiswa yang akan dilihat : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
            int kode;
            printf("\nMasukkan kode jurusan : ");
            scanf("%d", &kode);

            if(kode == 01)
                printf("Jurusan Sistem Informasi\n");
            else if(kode == 02)
                printf("Jurusan Teknik Informatika\n");
            else if (kode == 03)
                printf("Sistem Komputer\n");
            else
            {
                printf("unknown");
                exit(EXIT_SUCCESS);
            }

        printf("\nMasukkan nomor urut mahasiswa 1 - 10 untuk melihat Biodata: ");
        scanf("%d", &nomormenu);

        switch(nomormenu)
        {
            case 1 :
            {
                char f;
                printf("\nNAMA MAHASISWA \t: Sandi Yudha Prawira \n");
                printf("NIM \t\t: 09021181419124 \n");
                printf("Tanggal Lahir \t: 14 November 1996\n");
                printf("Alamat \t\t: Jalan Anggrek komplek permata indah NO B104 Palembang\n");
                printf("Agama\t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 4 lahat\n");
                printf("Golongan darah \t: B\n");
                printf("Nomor Telepon\t: 0711223445\n");
                compare(kode);
                break;
            }
            case 2 :
            {
                char f;
                printf("\nNAMA MAHASISWA \t: Rahmad Sapariyanto \n");
                printf("NIM \t\t: 09021181419114 \n");
                printf("Tanggal Lahir \t: 07 Juli 1996\n");
                printf("Alamat \t\t: Jalan guru-guru no 104 Empat Lawang Tebing Tinggi\n");
                printf("Agama \t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 4 lahat\n");
                printf("Golongan darah \t: AB\n");
                printf("Nomor Telepon\t: 0711334551\n");
                compare(kode);
                break;
            }
            case 3 :
            {
                char f;
                printf("\nNAMA MAHASISWA\t: Satria Agung Prayoga \n");
                printf("NIM \t\t: 09021181419129 \n");
                printf("Tanggal Lahir \t: 5 Februari 1997\n");
                printf("Alamat \t\t: Jalan Abihasan Said Pipa reja Lorong teratai ! no 83 Palembang\n");
                printf("Agama \t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 14 palembang\n");
                printf("Golongan darah \t: AB\n");
                printf("Nomor Telepon\t: 0711234567\n");
                compare(kode);
                break;
            }
            case 4 :
            {
                char f;
                printf("\nNAMA MAHASISWA \t: Widya Puspita Sari \n");
                printf("NIM \t\t: 09021181419128 \n");
                printf("Tanggal Lahir\t: 27 Januari 1997\n");
                printf("Alamat \t\t: Jalan Bahagia gandus Palembang\n");
                printf("Agama \t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 12 Palembang\n");
                printf("Golongan darah \t: A\n");
                printf("Nomor Telepon\t: 0711543210\n");
                compare(kode);
                break;
            }
            case 5 :
            {
                char f;
                printf("\nNAMA MAHASISWA\t: Dessy Dwi Utami \n");
                printf("NIM\t\t: 09021281419006 \n");
                printf("Tanggal Lahir\t: 23 Desember 1996\n");
                printf("Alamat \t\t: Jalan seduduk putih no 234 palembang\n");
                printf("Agama \t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 6 palembang\n");
                printf("Golongan darah \t: O\n");
                printf("Nomor Telepon\t: 0711223445\n");
                compare(kode);
                break;
            }
            case 6 :
            {
                char f;
                printf("\nNAMA MAHASISWA\t: Rudi Hartono \n");
                printf("NIM\t\t: 09021281419003 \n");
                printf("Tanggal Lahir\t: 5 mei 1997\n");
                printf("Alamat\t\t: Jalan Lebar Daun palembang\n");
                printf("Agama\t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 7 palembang\n");
                printf("Golongan darah \t: A\n");
                printf("Nomor Telepon\t: 0711221445\n");
                compare(kode);
                break;
            }
            case 7 :
            {
                char f;
                printf("\nNAMA MAHASISWA\t: Nuniek Yuli Utami \n");
                printf("NIM\t\t: 09021281419021 \n");
                printf("Tanggal Lahir\t: 9 Juli 1996\n");
                printf("Alamat\t\t: Jalan Angkatan 66 palembang\n");
                printf("Agama\t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 14 palembang\n");
                printf("Golongan darah \t: B\n");
                printf("Nomor Telepon\t: 0711223335\n");
                compare(kode);
                break;
            }
            case 8 :
            {
                char f;
                printf("\nNAMA MAHASISWA\t: Dini Apriyani \n");
                printf("NIM\t\t: 09021281419118 \n");
                printf("Tanggal Lahir\t: 28 September 1996\n");
                printf("Alamat \t\t: Jalan Bambang Utoyo palembang\n");
                printf("Agama \t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 5 palembang\n");
                printf("Golongan darah \t: O\n");
                printf("Nomor Telepon\t: 0711652334\n");
                compare(kode);
                break;
            }
            case 9:
            {
                char f;
                printf("\nNAMA MAHASISWA\t: Haris April Wijaya \n");
                printf("NIM\t\t: 09021281419116 \n");
                printf("Tanggal Lahir\t: 2 Januari 1997\n");
                printf("Alamat \t\t: Jalan M Isa palembang\n");
                printf("Agama \t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 7 palembang\n");
                printf("Golongan darah \t: AB\n");
                printf("Nomor Telepon\t: 0711333445\n");
                compare(kode);
                break;
            }
            case 10 :
            {
                char f;
                printf("\nNAMA MAHASISWA\t: NurRazella Ananda \n");
                printf("NIM\t\t: 09021281419001 \n");
                printf("Tanggal Lahir \t: 24 Februari 1997\n");
                printf("Alamat \t\t: Jalan Pipa reja lorong sekundang palembang\n");
                printf("Agama \t\t: Islam\n");
                printf("Asal Sekolah\t: SMA N 1 palembang\n");
                printf("Golongan darah \t: B\n");
                printf("Nomor Telepon\t: 0711123456\n");
                compare(kode);
                break;
            }
        }

            printf("Fakultas \t: ILMU KOMPUTER\n");



    }
}
