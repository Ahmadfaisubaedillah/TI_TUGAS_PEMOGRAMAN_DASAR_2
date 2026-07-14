const http = require("http");

const server = http.createServer((req, res) => {
  if (req.url === "/") {
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.end("Selamat Datang di Praktikum Pemrograman Dasar");
  } else if (req.url === "/profil") {
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.end("Halaman Profil Mahasiswa");
  } else if (req.url === "/mata-kuliah") {
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.end("Halaman Daftar Mata Kuliah");
  } else if (req.url === "/kontak") {
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.end("Halaman Kontak");
  } else {

    res.writeHead(404, { "Content-Type": "text/plain" });
    res.end("404 - Halaman tidak ditemukan");
  }
});

server.listen(3000, () => {
  console.log("Server berjalan di http://localhost:3000");
});
