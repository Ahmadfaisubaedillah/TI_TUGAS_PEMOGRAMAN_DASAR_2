const http = require("http");

const server = http.createServer(function (req, res) {
  res.writeHead(200, { "Content-Type": "text/plain" });
  res.write("Selamat Datang di Praktikum Pemrograman Dasar");
  res.end();
});

server.listen(3000, () => {
  console.log("Server berjalan di http://localhost:3000");
});
