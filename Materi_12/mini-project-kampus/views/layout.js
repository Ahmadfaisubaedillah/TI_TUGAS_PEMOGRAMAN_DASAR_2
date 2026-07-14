function layout(judul, isi) {
  return `<!DOCTYPE html>
<html lang="id">
<head>
  <meta charset="UTF-8" />
  <title>${judul} - Sistem Informasi Kampus</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      max-width: 700px;
      margin: 40px auto;
      padding: 0 20px;
      color: #222;
      background: #f7f7f9;
    }
    header {
      background: #2f5d8f;
      color: #fff;
      padding: 16px 20px;
      border-radius: 8px 8px 0 0;
    }
    main {
      background: #fff;
      padding: 20px;
      border: 1px solid #ddd;
      border-top: none;
      border-radius: 0 0 8px 8px;
    }
    nav a {
      color: #fff;
      margin-right: 14px;
      text-decoration: none;
      font-size: 14px;
    }
    nav a:hover { text-decoration: underline; }
    footer {
      text-align: center;
      font-size: 12px;
      color: #888;
      margin-top: 16px;
    }
  </style>
</head>
<body>
  <header>
    <h2 style="margin:0 0 8px 0;">Sistem Informasi Kampus</h2>
    <nav>
      <a href="/">Beranda</a>
      <a href="/profil">Profil</a>
      <a href="/mata-kuliah">Mata Kuliah</a>
      <a href="/jadwal">Jadwal</a>
      <a href="/kontak">Kontak</a>
    </nav>
  </header>
  <main>
    ${isi}
  </main>
  <footer>Mini Project Node.js - Pertemuan 12</footer>
</body>
</html>`;
}

module.exports = layout;
