const layout = require("./layout");

const home = () =>
  layout(
    "Beranda",
    `<h1>Selamat Datang</h1>
     <p>Selamat datang di Sistem Informasi Kampus. Silakan pilih menu
     di atas untuk melihat profil kampus, daftar mata kuliah, jadwal,
     atau informasi kontak.</p>`
  );

const profil = () =>
  layout(
    "Profil Kampus",
    `<h1>Profil Kampus</h1>
     <p>Universitas Insan Pembangunan - Fakultas Ilmu Komputer,
     Program Studi Teknologi Informasi. Kampus ini berfokus pada
     pengembangan mahasiswa di bidang teknologi informasi dan
     rekayasa perangkat lunak.</p>`
  );

const mataKuliah = () =>
  layout(
    "Mata Kuliah",
    `<h1>Daftar Mata Kuliah</h1>
     <ul>
       <li>Pemrograman Dasar</li>
       <li>Basis Data</li>
       <li>Pemrograman Web</li>
       <li>Jaringan Komputer</li>
       <li>Rekayasa Perangkat Lunak</li>
     </ul>`
  );

const jadwal = () =>
  layout(
    "Jadwal Kuliah",
    `<h1>Jadwal Kuliah</h1>
     <p>Jadwal perkuliahan semester berjalan dapat dilihat melalui
     portal akademik kampus. Halaman ini sebagai contoh routing
     kelima pada mini project.</p>`
  );

const kontak = () =>
  layout(
    "Kontak",
    `<h1>Hubungi Kami</h1>
     <p>Email: info@kampus.ac.id</p>
     <p>Telepon: (021) 000-0000</p>`
  );

const notFound = () =>
  layout(
    "404 Tidak Ditemukan",
    `<h1>404 - Halaman Tidak Ditemukan</h1>
     <p>Maaf, halaman yang Anda cari tidak tersedia. Silakan kembali
     ke <a href="/">Beranda</a>.</p>`
  );

module.exports = { home, profil, mataKuliah, jadwal, kontak, notFound };
