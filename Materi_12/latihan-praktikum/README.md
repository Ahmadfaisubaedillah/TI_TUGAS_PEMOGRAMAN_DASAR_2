# Latihan Praktikum — Pertemuan 12 (Node.js Dasar & HTTP Server)

Kumpulan jawaban latihan praktikum sesuai soal pada BAB 19 materi kuliah.
Setiap soal dipisah jadi satu file supaya gampang diuji satu-satu, tapi
alurnya memang sengaja dibuat berlanjut (soal 3 dan 4 melanjutkan server
dari soal 2) karena begitu juga cara materinya dibangun bab per bab.

## Cara menjalankan

Pastikan Node.js sudah terpasang (cek dengan `node -v` dan `npm -v`).

```bash
node soal1_biodata.js
node soal2_server_welcome.js
node soal3_routing.js
node soal4_status_code.js
```

Untuk soal 2–4, buka browser ke `http://localhost:3000` setelah
terminal menampilkan tulisan bahwa server sudah jalan. Tekan
`Ctrl + C` di terminal untuk mematikan server sebelum menjalankan file
berikutnya (satu port cuma bisa dipakai satu proses).

## Daftar soal

| No | File | Soal |
|----|------|------|
| 1 | `soal1_biodata.js` | Program Node.js yang menampilkan biodata mahasiswa di terminal |
| 2 | `soal2_server_welcome.js` | HTTP Server menampilkan "Selamat Datang di Praktikum Pemrograman Dasar" |
| 3 | `soal3_routing.js` | Tambah routing `/profil`, `/mata-kuliah`, `/kontak` |
| 4 | `soal4_status_code.js` | Tampilkan status code yang sesuai untuk halaman tidak ditemukan |
| 5 | `SOAL5_PENGUJIAN.md` | Panduan pengujian seluruh endpoint pakai Browser & Postman |
