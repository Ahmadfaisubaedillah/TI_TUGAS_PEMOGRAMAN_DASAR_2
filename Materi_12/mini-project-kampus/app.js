const http = require("http");
const router = require("./routes/router");

const PORT = 3000;

const server = http.createServer(router);

server.listen(PORT, () => {
  console.log(`Server Informasi Kampus berjalan di http://localhost:${PORT}`);
});
