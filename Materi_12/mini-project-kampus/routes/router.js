const pages = require("../views/pages");

function router(req, res) {
  const url = req.url;

  res.setHeader("Content-Type", "text/html; charset=utf-8");

  if (url === "/") {
    res.writeHead(200);
    res.end(pages.home());
  } else if (url === "/profil") {
    res.writeHead(200);
    res.end(pages.profil());
  } else if (url === "/mata-kuliah") {
    res.writeHead(200);
    res.end(pages.mataKuliah());
  } else if (url === "/jadwal") {
    res.writeHead(200);
    res.end(pages.jadwal());
  } else if (url === "/kontak") {
    res.writeHead(200);
    res.end(pages.kontak());
  } else {
    res.writeHead(404);
    res.end(pages.notFound());
  }
}

module.exports = router;
