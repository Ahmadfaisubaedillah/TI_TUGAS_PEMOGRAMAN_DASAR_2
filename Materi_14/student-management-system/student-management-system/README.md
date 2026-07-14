# Student Management System — Panduan Pengerjaan

Project ini adalah implementasi lengkap Materi Kuliah ke-14: Integrasi MySQL
dengan Node.js menggunakan arsitektur MVC (STEP 1 - STEP 6).

## Yang Sudah Tersedia di Project Ini

- `app.js` — entry point Express
- `config/db.js` — koneksi MySQL (connection pool)
- `models/studentModel.js` — query database (getAll, getById, create, update, delete)
- `controllers/studentController.js` — logic request/response untuk tiap endpoint
- `routes/studentRoutes.js` — daftar route CRUD
- `database/student.sql` — script untuk membuat database & tabel + data awal
- `public/` — frontend (HTML, CSS, JS) dengan fitur Tambah, Edit, Hapus
- `.env.example` — contoh konfigurasi environment variable
- `.gitignore`

## Langkah Menjalankan dari Awal

### 1. Install XAMPP
Download dari situs resmi Apache Friends, install, lalu buka **XAMPP
Control Panel** dan klik **Start** pada **Apache** dan **MySQL** (harus
berubah hijau).

### 2. Buat Database
- Buka `http://localhost/phpmyadmin`
- Klik tab **SQL**
- Copy-paste seluruh isi file `database/student.sql`, lalu klik **Go**
- Pastikan database `student_db` dan tabel `students` (dengan 3 data
  awal) sudah muncul di panel kiri

### 3. Siapkan Project
Buka folder project ini di VS Code, lalu di terminal jalankan:

```bash
npm install
```

Ini akan menginstall express, mysql2, dotenv, cors, dan nodemon sesuai
`package.json`.

### 4. Atur File .env
File `.env` sudah tersedia dengan isi default:

```
DB_HOST=localhost
DB_PORT=3306
DB_USER=root
DB_PASSWORD=
DB_NAME=student_db
PORT=3000
```

Kalau MySQL di XAMPP kamu pakai password, isi `DB_PASSWORD` sesuai
konfigurasi. Instalasi default XAMPP biasanya kosong.

### 5. Jalankan Server

```bash
npm run dev
```

Jika berhasil, akan muncul:

```
==================================
 Student Management System
==================================
Server Running : http://localhost:3000
Database : MySQL
==================================
```

### 6. Uji Coba

- `http://localhost:3000` → cek pesan API + identitas
- `http://localhost:3000/health` → cek status server
- `http://localhost:3000/test-db` → cek koneksi database
- `http://localhost:3000/students` → lihat data mahasiswa (JSON)
- `http://localhost:3000` (dengan static frontend aktif) → tampilan
  form + tabel mahasiswa, bisa tambah/edit/hapus data langsung dari
  browser

### 7. Uji CRUD via Postman (opsional, sesuai materi)

| Method | Endpoint | Body |
| --- | --- | --- |
| GET | /students | - |
| GET | /students/:id | - |
| POST | /students | JSON data mahasiswa baru |
| PUT | /students/:id | JSON data yang diubah |
| DELETE | /students/:id | - |

## Troubleshooting

| Error | Solusi |
| --- | --- |
| `Access denied for user 'root'` | Cek `.env`, pastikan `DB_USER` dan `DB_PASSWORD` sesuai konfigurasi MySQL kamu |
| `Unknown database 'student_db'` | Jalankan ulang `database/student.sql` via phpMyAdmin |
| `ECONNREFUSED` | Pastikan Apache & MySQL di XAMPP Control Panel sedang **Running** |
| `Cannot find package 'mysql2'` | Jalankan `npm install mysql2` |

## Tugas / Latihan Tambahan (dari materi)

1. **Praktik Mandiri (STEP 2):** ubah pesan endpoint `/` jadi identitas
   sendiri (sudah dilakukan di `app.js`, silakan sesuaikan nama), dan
   endpoint `/health` (sudah tersedia).
2. **Tantangan (STEP 3):** tambah 1 data mahasiswa langsung lewat
   phpMyAdmin, lalu refresh `/students` — pastikan data baru langsung
   muncul tanpa ubah kode.
3. **Mini Challenge (STEP 6):** tambahkan kolom baru `alamat
   VARCHAR(255)` ke tabel `students`, lalu:
   - Tambahkan field **Alamat** di form (`public/index.html`)
   - Tampilkan kolom **Alamat** di tabel (`public/script.js`)
   - Update `models/studentModel.js` dan
     `controllers/studentController.js` supaya query `create` dan
     `update` juga menangani `alamat`

Kalau butuh bantuan mengerjakan Mini Challenge di atas, tinggal minta
saja ke Claude.
