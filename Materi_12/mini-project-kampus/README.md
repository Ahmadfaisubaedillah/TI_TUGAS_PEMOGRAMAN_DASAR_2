# Mini Project — Server Informasi Kampus

Mini project ini dibuat untuk memenuhi ketentuan pada BAB 20 materi
kuliah ke-12 (Node.js Dasar dan Pembuatan Server HTTP Sederhana).

## Ketentuan yang dipenuhi

| Ketentuan | Status | Keterangan |
|---|---|---|
| Port 3000 | ✅ | Diatur di `app.js` lewat konstanta `PORT` |
| Minimal 5 routing | ✅ | `/`, `/profil`, `/mata-kuliah`, `/jadwal`, `/kontak` |
| Halaman HTML sederhana | ✅ | Tiap halaman pakai template di `views/layout.js` |
| Status code sesuai | ✅ | 200 untuk halaman yang ada, 404 untuk yang tidak |
| File `package.json` | ✅ | Tersedia di root project |
| Didokumentasikan di README | ✅ | File ini |

## Struktur folder

```
mini-project-kampus/
├── app.js              # entry point, hanya membuat server
├── package.json
├── routes/
│   └── router.js        # aturan URL -> halaman mana
└── views/
    ├── layout.js         # kerangka HTML yang dipakai semua halaman
    └── pages.js           # isi konten tiap halaman
```

Struktur ini sengaja dipisah per fungsi (bukan ditumpuk semua di satu
file `app.js`) mengikuti best practice yang ada di BAB 18: struktur
folder rapi, file dipisah berdasarkan fungsi, dan pakai `const` untuk
tiap `require` module.

## Cara menjalankan

```bash
cd mini-project-kampus
node app.js
```

Setelah muncul tulisan `Server Informasi Kampus berjalan di
http://localhost:3000`, buka browser dan coba kelima URL berikut:

| URL | Isi Halaman |
|---|---|
| `http://localhost:3000/` | Beranda |
| `http://localhost:3000/profil` | Profil Kampus |
| `http://localhost:3000/mata-kuliah` | Daftar Mata Kuliah |
| `http://localhost:3000/jadwal` | Jadwal Kuliah |
| `http://localhost:3000/kontak` | Hubungi Kami |

URL selain daftar di atas (misal `/asal`) akan menampilkan halaman
404 - Halaman Tidak Ditemukan dengan status code `404`.

Pengujian juga bisa dilakukan lewat Postman dengan method **GET** ke
URL yang sama, seperti dicontohkan pada BAB 16 materi kuliah.
