Nama : Misbachul Munir
NIM : 24060124120031
Kelas : A
Lab : A2

Hasil setelah dicompile akan membentuk beberapa bentuk(disini saya langsung memasukkan semua bentuk dalam satu codingan. jadi nanti akan menjadi seperti ini:
<img width="1121" height="903" alt="Screenshot 2026-03-08 154355" src="https://github.com/user-attachments/assets/b7614192-fa0f-446a-892d-775eec7ae58d" />

Dari output dapat saya simpulkan bahwa perbedaan antara GL_LINE_STRIP dengan GL_LINE_LOOP adalah : GL_LINE_STRIP Menghubungkan beberapa titik menjadi garis secara berurutan dan titik terakhir tidak kembali ke titik pertama(tidak terjadi loop/tidak menjadi sebuah bentuk yang nyatu). Sedangkan Untuk GL_LINE_LOOP Menghubungkan beberapa titik menjadi garis secara berurutan dan titik terakhir kembali ke titik pertama( terjadi loop/ menjadi sebuah bentuk yang nyatu)
Perbedaan antara GL_TRIANGLE_FAN dengan GL_TRIANGLE_STRIP adalah : GL_TRIANGLE_FAN Semua segitiganya menjadi satu titik pusat dan vertex pertama yang kita input menjadi titik pusat. Sedangkan GL_TRIANGLE_STRIP Segitiganya dibuat berurutan. Jadi setiap segitiga baru menggunakan 2 vertex sebelumnya.
Perbedaan GL_QUADS dengan GL_QUAD_STRIP adalah : GL_QUADS Setiap 4 vertexnya membentuk satu segi empat dan berdiri sendiri. Sedangkan GL_QUAD_STRIP membuat serangkaian segiempat yang saling terhubung. Jadi setiap dua vertex tambahan membentuk segiempat baru.
