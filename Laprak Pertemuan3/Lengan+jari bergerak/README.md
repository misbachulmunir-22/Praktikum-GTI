# Penugasan Praktikum GTI 3
___
## Nama: Misbachul Munir
## NIM : 24060124120031
## Kelas : A
## Lab : A2

Hasil dari file lengan+jari bergerak yang sudah dicompile akan menjadi seperti berikut:

Screenshoot 1(telapak tangan lurus):
<img width="1919" height="1079" alt="Screenshot 2026-03-23 220633" src="https://github.com/user-attachments/assets/546e4756-e983-48b3-aa4d-98030a0e6787" />

Screenshoot 2(telapak tangan dan jari menggenggam:
<img width="1919" height="1079" alt="Screenshot 2026-03-23 220740" src="https://github.com/user-attachments/assets/feaecb8b-2c2e-4230-8b01-e5feab6adf71" />

Screenshoot 3(telapak tangan lurus dan ruas jari di rotasi):
<img width="1918" height="1079" alt="Screenshot 2026-03-23 220856" src="https://github.com/user-attachments/assets/f886f037-98ba-423e-98fd-76e8b6a23222" />

### Penjelasan tentang cara kerja lengan:

Kode lengan bergerak bekerja dengan memanfaatkan konsep transformasi, yaitu menggunakan glPushMatrix() dan glPopMatrix() yang digunakan untuk mengatur hubungan per bagian(objek) yang ada di dalam file.
Awalnya, sistem melakukan translasi untuk memposisikan titik awal lengan. Kemudian dilakukan rotasi pada bagian bahu menggunakan variabel shoulder, yang menyebabkan seluruh bagian lengan (termasuk siku) juga ikut berotasi. Setelah itu, dibuat objek persegi panjang (menggunakan glutWireCube yang di-scale) sebagai bentuk dari lengan atas.
Selanjutnya, dilakukan translasi ke posisi siku, lalu diberikan rotasi kedua menggunakan variabel elbow. Rotasi ini hanya mempengaruhi bagian lengan bawah, karena sebelumnya posisi matriks sudah disimpan(sudah melakukan push dan pop matrik). Kemudian digambar lagi objek(menggunakan glutWireCube yang di-scale juga) sebagai lengan bawah.
Konsep ini adalah transformasi berurutan, di mana rotasi pada bahu akan mempengaruhi seluruh bagian setelahnya, sedangkan rotasi pada siku hanya mempengaruhi bagian setelah siku. Hal ini membuat gerakan terlihat seperti lengan manusia yang memiliki sendi.
Pergerakan sudut bahu dan siku dikontrol melalui input keyboard s,S,e,E , yang akan mengubah nilai variabel dan memicu glutPostRedisplay() agar tampilan berubah.
