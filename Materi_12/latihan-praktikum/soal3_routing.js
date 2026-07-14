const http = require("http");

const server = http.createServer((req, res) => {
  res.writeHead(200, { "Content-Type": "text/plain" });

  if (req.url === "/") {
    res.end("Selamat Datang di Praktikum Pemrograman Dasar");
  } else if (req.url === "/profil") {
    res.end("Halaman Profil Mahasiswa");
  } else if (req.url === "/mata-kuliah") {
    res.end("Halaman Daftar Mata Kuliah");
  } else if (req.url === "/kontak") {
    res.end("Halaman Kontak");
  } else {
    res.end("404 - Halaman tidak ditemukan");
  }
});

server.listen(3000, () => {
  console.log("Server berjalan di http://localhost:3000");
  console.log("Coba buka: /, /profil, /mata-kuliah, /kontak");
});
