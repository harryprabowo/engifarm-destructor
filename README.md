# engifarm-destructor
Tugas Besar IA IF2210 - Pemrograman Berorientasi Objek Engi’s Farm

I. Deskripsi Umum Tugas
Tugas ini adalah penerapan dari topik yang telah dibahas terkait konsep Pemrograman Berorientasi Objek.

II. Tujuan
1. Mahasiswa mampu merancang kelas dengan paradigma berorientasi objek, untuk menghasilkan rancangan kelas dan pengelompokan kelas yang sesuai dengan aturan serta dokumentasi rancangan dengan baik 
2. Mahasiswa mampu mengantisipasi dan mengelola perubahan spesifikasi perangkat lunak

III. Deskripsi Persoalan
Sudah hampir setahun semenjak Chef membuka restoran Engi’s Kitchen. Chef telah lelah mengurus bisnis restorannya yang sudah berkembang pesat. Banyaknya peran yang harus ia ambil setelah ekspansi kurang lebih empat bulan lalu membuatnya lelah. Hari itu adalah hari yang cerah, Chef, sedang bebersih rumahnya. Saat membersihkan rumahnya, ia menemukan sebuah amplop berwarna putih bersih tanpa tulisan apapun di atasnya. Chef membuka amplop putih tersebut dan menemukan sepucuk surat yang ditulis oleh kakeknya yang telah meninggal sepuluh tahun lalu. Pada surat tersebut, tertulis bahwa kakeknya telah mewariskan padanya sebuah peternakan untuknya. Melihat kesempatan
ini, Chef pun menutup restoran yang telah ia buka nyaris setahun. Chef tidak membuang waktu dan segera mencari peternakan warisan kakeknya untuk membuka Engi’s Farm. Petualangan Chef di Engi’s Farm pun dimulai.

Pemain ( Player ) memiliki wadah air yang dapat menampung air dalam jumlah terbatas dan tas yang dapat menampung sejumlah terbatas Product.

Pada Engi’s Farm, terdapat kumpulan petak tanah ( Cell ) yang direpresentasikan dengan sebuah matriks 2D dengan ukuran (X,Y). Setiap Cell dapat berupa Land , daerah untuk beternak hewan; atau Facility , yaitu fasilitas peternakan. Land digunakan untuk tempat hidup hewan. Land dapat dikategorikan sebagai Coop , Grassland , atau Barn . Coop digunakan untuk beternak hewan penghasil telur, Grassland digunakan untuk beternak hewan penghasil susu, Barn digunakan untuk beternak hewan penghasil daging.

Facility dapat berupa Well , Mixer , atau Truck . Well digunakan untuk mengisi wadah air yang dimiliki Player ; Mixer digunakan untuk membuat produk sampingan dari produk hewan; dan Truck digunakan untuk menjual barang hasil ternak. Hewan ternak ( Farm Animal ) dapat dikategorikan sebagai penghasil telur ( Egg Producing Farm Animal , penghasil daging ( Meat Producing Farm Animal ), dan penghasil susu ( Milk Producing Farm Animal ) . Hasil yang dapat dijual oleh peternakan ( Product ) dapat dikategorikan sebagai hasil ternak ( Farm Product ) dan hasil sampingan peternakan ( Side Product ).

IV. Deskripsi Mekanisme
1. Mekanisme Umum
Pada saat memulai permainan, inisialisasi seluruh Cell berdasarkan layout yang telah dibuat sebelumnya (baik melalui file eksternal ataupun hardcode ). Peta harus memuat semua kelas yang dapat ditampilkan (misal : FarmAnimal, Facility, Land, Player). Hewan
yang lapar harus ditampilkan berbeda dengan hewan yang tidak lapar. Begitu pula dengan Land yang memiliki rumput dan tidak
Jika perlu, buatlah sebuah kelas abstrak Renderable dengan virtual method render() yang mengembalikan karakter yang merepresentasikan objek tersebut bila ditampilkan untuk membantu dalam menampilkan objek. Berikut merupakan contoh Ilustrasi Engi’s Farm (warna pada ilustrasi hanya untuk mempermudah visualisasi)

Engi’s Farm

C o c - x G x x - - T
o * * - x x x x - - M
o * o - x x @ @ - - -
- - - - x x x @ - - W 
- - - - x x g x - - -
- - - - x x x x - - -
- - - - - - - - - - P
- - # - - - - H - - -
- - # # - H - - - - - Money : 0
- - - # # - - - - - - Water : 0

Command: INTERACT

Inventory:
- ChickenEgg
- ChickenEgg
- BeefRolade

Keterangan:
C : Ayam
G : Kambing
H : Kuda
T : Truck
M : Mixer
W : Well
P : Player
- : Grassland
x : Barn
o : Coop
*, @, # : Land dengan rumput

2. Mekanisme Player
Player dapat bergerak bebas pada semua Cell yang bertipe Land selama tidak ada hewan pada Cell tersebut. Setiap Player memiliki beberapa aksi yang dapat dilakukan selain bergerak, yaitu Talk, Interact, Kill, dan Grow. Talk digunakan untuk berbicara dengan hewan; Interact digunakan untuk berinteraksi dengan FarmAnimal atau Facility di samping Player ; Kill untuk menyembelih hewan; Grow digunakan untuk menyiram Land dengan wadah air yang dimiliki dan menumbuhkan rumput di petak Land tempat Player berdiri.
Player dapat berinteraksi dengan Well untuk mengisi air , dan berinteraksi dengan Truck untuk mengosongkan tas dan menjual seluruh Product pada inventory dan mendapatkan uang. Setiap Product memiliki harga yang berbeda. Setelah Player berinteraksi dengan Truck , maka Truck tidak dapat digunakan untuk jangka waktu tertentu. Permainan akan selesai apabila jumlah hewan pada Engi’s Farm sudah habis. Player dapat menggunakan command Mix pada Mixer untuk membuat produk sampingan ( SideProduct ).

Player harus mengkombinasikan bahan-bahan dari tas (minimal dua bahan [boleh sama]; cara implementasi dan interaksi dibebaskan) untuk
mendapatkan sebuah SideProduct , (misal: memasukkan ChickenEgg dan CowMeat untuk mendapatkan BeefRolade ). Perintah Kill hanya dapat digunakan pada hewan MeatProducingFarmAnimal untuk mendapatkan Product daging. Namun hewan tersebut akan mati. Sebaliknya, perintah Interact hanya dapat digunakan pada hewan EggProducingFarmAnimal dan MilkProducingFarmAnimal

3. Mekanisme FarmAnimal
Setiap petak Land pada Engi’s Farm hanya dapat diisi oleh satu ekor hewan pada satu waktu. Setiap petak Land dapat ditumbuhi rumput sebagai makanan hewan ketika disiram air dengan wadah air yang dimiliki pemain. Pada Engi’s Farm Hewan ternak dapat bergerak secara acak selama berada di area Land yang sesuai. Hewan juga dapat mengeluarkan suara ketika diajak berbicara (berupa teks yang dicetak pada layar. Misal ayam berbunyi "petok" atau sapi berbunyi "moo".

Seekor hewan dapat dikategorikan sebagai lebih dari satu jenis hewan ternak. Seperti halnya hewan ternak biasa, hewan ternak di Engi’s Farm juga bisa merasakan rasa lapar. Hewan ternak akan merasa lapar setelah waktu tertentu . Jika setelah hewan merasa lapar, hewan tidak mendapat makan setelah 5 tick maka hewan tersebut akan mati . Hewan ternak harus makan rumput yang tumbuh pada Land agar tidak lapar. Setiap jenis hewan memiliki waktu yang berbeda sebelum merasakan lapar. Hewan akan secara otomatis memakan rumput pada tempat ia berdiri jika merasa lapar. Seekor hewan ternak dapat menghasilkan sebuah FarmProduct setelah memakan rumput. Ketika pemain berinteraksi dengan hewan ternak atau menyembelih hewan tersebut, maka pemain akan mendapatkan FarmProduct milik hewan tersebut (misal: Chicken [ EggProducingFarmAnimal ] dapat menghasilkan ChickenEgg ). Jika pemain alaman 3 dari 6 halaman belum mengambil hasil ternak yang sebelumnya dihasilkan, maka hewan tidak akan menghasilkan produk tambahan jika hewan memakan rumput lagi.

Pada MeatProducingFarmAnimal , hewan tidak perlu memakan rumput untuk menghasilkan daging ketika disembelih. Untuk tugas ini buat setidaknya 6 (enam) kelas riil FarmAnimal , 6 (enam) kelas riil FarmProduct , dan 3 (tiga) kelas riil SideProduct (total 15 kelas)