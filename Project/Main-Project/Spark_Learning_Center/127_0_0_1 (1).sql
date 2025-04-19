-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 25, 2024 at 12:43 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cinema`
--
CREATE DATABASE IF NOT EXISTS `cinema` DEFAULT CHARACTER SET utf8 COLLATE utf8_unicode_ci;
USE `cinema`;

-- --------------------------------------------------------

--
-- Table structure for table `favorite`
--

CREATE TABLE `favorite` (
  `id_favorite` int(11) NOT NULL,
  `user_favorite` varchar(1000) NOT NULL,
  `movie_favorite` varchar(1000) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `favorite`
--

INSERT INTO `favorite` (`id_favorite`, `user_favorite`, `movie_favorite`, `status`) VALUES
(1, '1', '1', 1),
(2, '4', '2', 1),
(3, '4', '5', 1),
(4, '5', '3', 1),
(5, '5', '5', 1),
(6, '5', '3', 1);

-- --------------------------------------------------------

--
-- Table structure for table `movie`
--

CREATE TABLE `movie` (
  `id_movie` int(11) NOT NULL,
  `name_movie` varchar(1000) NOT NULL,
  `detail_movie` varchar(1000) NOT NULL,
  `type_movie` varchar(1000) NOT NULL,
  `file_movie` varchar(1000) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `movie`
--

INSERT INTO `movie` (`id_movie`, `name_movie`, `detail_movie`, `type_movie`, `file_movie`, `status`) VALUES
(1, '333', '333', '333', 'file_example_MP4_480_1_5MG.mp4', 0),
(2, 'n', 'd', 't', 'file_example_MP4_480_1_5MG.mp4', 1),
(3, '6868', '6767', '554', 'file_example_MP4_480_1_5MG.mp4', 1),
(4, '34354', '213', '546', '', 1),
(5, '87978', '213', '546', '', 1),
(6, '4856', '45645', '23', '', 1);

-- --------------------------------------------------------

--
-- Table structure for table `rating`
--

CREATE TABLE `rating` (
  `id_rating` int(11) NOT NULL,
  `user_rating` varchar(1000) NOT NULL,
  `movie_rating` varchar(1000) NOT NULL,
  `score_rating` int(11) NOT NULL,
  `review_rating` varchar(1000) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `rating`
--

INSERT INTO `rating` (`id_rating`, `user_rating`, `movie_rating`, `score_rating`, `review_rating`, `status`) VALUES
(1, '1', '1', 1, '1', 1),
(2, '4', '2', 3, 'sad', 1),
(3, '4', '2', 3, '		sad 			', 1),
(4, '4', '2', 3, '		sad 			', 1),
(5, '5', '3', 1, 'SO boringgggggggg', 1),
(6, '5', '3', 5, '	AMAZING	 			', 1),
(7, '5', '3', 3, 'xoxooo', 1);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `id_user` int(11) NOT NULL,
  `username` varchar(1000) NOT NULL,
  `password` varchar(1000) NOT NULL,
  `full_name` varchar(1000) NOT NULL,
  `email` varchar(1000) NOT NULL,
  `tel` varchar(1000) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id_user`, `username`, `password`, `full_name`, `email`, `tel`, `status`) VALUES
(1, '2', '2', '2', '2', '2', 1),
(2, '1', '1', '1', '1@1', '1', 1),
(3, 'admin', 'admin', 'admin', 'admin@1', 'admin', 2),
(4, 'poru2', 'porp2', 'porf2', 'por@12', 'port2', 1),
(5, 'yuu2', 'yup', 'yuf', 'yu@1', 'yut', 1);

-- --------------------------------------------------------

--
-- Table structure for table `watch`
--

CREATE TABLE `watch` (
  `id_watch` int(11) NOT NULL,
  `user_watch` varchar(1000) NOT NULL,
  `movie_watch` varchar(1000) NOT NULL,
  `date_watch` varchar(1000) NOT NULL,
  `type_watch` varchar(1000) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `watch`
--

INSERT INTO `watch` (`id_watch`, `user_watch`, `movie_watch`, `date_watch`, `type_watch`, `status`) VALUES
(46, '5', '3', '01/25/2024 12:24:51 pm', '554', 1),
(47, '5', '3', '01/25/2024 12:25:00 pm', '554', 1),
(48, '5', '2', '01/25/2024 12:25:18 pm', 't', 1),
(51, '5', '3', '01/25/2024 03:40:59 pm', '554', 1),
(52, '5', '3', '01/25/2024 03:41:21 pm', '554', 1),
(53, '5', '3', '01/25/2024 03:41:30 pm', '554', 1);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `favorite`
--
ALTER TABLE `favorite`
  ADD PRIMARY KEY (`id_favorite`);

--
-- Indexes for table `movie`
--
ALTER TABLE `movie`
  ADD PRIMARY KEY (`id_movie`);

--
-- Indexes for table `rating`
--
ALTER TABLE `rating`
  ADD PRIMARY KEY (`id_rating`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`id_user`);

--
-- Indexes for table `watch`
--
ALTER TABLE `watch`
  ADD PRIMARY KEY (`id_watch`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `favorite`
--
ALTER TABLE `favorite`
  MODIFY `id_favorite` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `movie`
--
ALTER TABLE `movie`
  MODIFY `id_movie` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT for table `rating`
--
ALTER TABLE `rating`
  MODIFY `id_rating` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `id_user` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `watch`
--
ALTER TABLE `watch`
  MODIFY `id_watch` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=54;
--
-- Database: `learning_center`
--
CREATE DATABASE IF NOT EXISTS `learning_center` DEFAULT CHARACTER SET utf8 COLLATE utf8_unicode_ci;
USE `learning_center`;

-- --------------------------------------------------------

--
-- Table structure for table `bought`
--

CREATE TABLE `bought` (
  `id_bought` int(11) NOT NULL,
  `user_bought` int(11) NOT NULL,
  `item_bought` int(11) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `bought`
--

INSERT INTO `bought` (`id_bought`, `user_bought`, `item_bought`, `status`) VALUES
(1, 1, 2, 1),
(2, 2, 2, 1),
(3, 2, 2, 1),
(4, 2, 1, 1),
(5, 1, 1, 1);

-- --------------------------------------------------------

--
-- Table structure for table `item`
--

CREATE TABLE `item` (
  `id_item` int(11) NOT NULL,
  `detail` text NOT NULL,
  `price` int(11) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `item`
--

INSERT INTO `item` (`id_item`, `detail`, `price`, `status`) VALUES
(1, 'VVIP', 20, 1),
(2, 'Pro', 10, 1),
(3, 'Once', 25, 1);

-- --------------------------------------------------------

--
-- Table structure for table `nametag`
--

CREATE TABLE `nametag` (
  `id_nametag` int(11) NOT NULL,
  `user_nametag` int(11) NOT NULL,
  `tag` text NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- --------------------------------------------------------

--
-- Table structure for table `post`
--

CREATE TABLE `post` (
  `id_post` int(11) NOT NULL,
  `user_post` int(11) NOT NULL,
  `category` text NOT NULL,
  `sub_category` text NOT NULL,
  `title` text NOT NULL,
  `descript` text NOT NULL,
  `content` text NOT NULL,
  `date_post` datetime NOT NULL DEFAULT current_timestamp(),
  `written_date_post` datetime NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `post`
--

INSERT INTO `post` (`id_post`, `user_post`, `category`, `sub_category`, `title`, `descript`, `content`, `date_post`, `written_date_post`, `status`) VALUES
(1, 1, '3', '1', 'English for communication', 'My english is great', 'Hello World! People of all ages, genders, races are welcome here. HO HO HO', '2024-05-22 19:42:26', '2024-05-21 19:40:22', 1),
(2, 2, '2', '2', 'The Game of Civil Wars', 'All contestant of all ages are welcome.', 'Civil wars contesttttttttt', '2024-05-23 20:06:33', '2024-05-23 15:06:14', 1),
(3, 1, '2', '3', 'Social interaction workshop', 'You can meet tons of people here!', 'Meet us at the workshop at 9 O\'clockkkkkkkkkkkk\r\n', '2024-05-23 20:14:36', '2024-05-23 19:06:29', 1),
(4, 1, '5', '4', 'PHYSIC IS Fun! [Physics Museum Exhibition Opening]', 'Welcome Welcome to the physic world.', 'Physic Exhibiton Let\'s goooooooo', '2024-05-23 20:14:57', '2024-05-23 19:38:50', 1),
(5, 2, '6', '1', 'Prem\'s guide to master chemistry', 'From chem posn 1st camp', 'Prem hahahahahhahahahahaha', '2024-05-23 20:29:29', '2024-05-23 20:28:42', 1),
(6, 2, '7', '1', 'Cell respiration', 'Taught by Yuppy', 'Biology is great', '2024-05-23 21:54:18', '2024-05-23 21:22:36', 1),
(7, 2, '1', '2', 'Thai National Poem Contest', 'Welcome all people who write good poem.', 'POEMMMMMMMMMM', '2024-05-24 23:36:19', '2024-05-24 23:35:52', 1),
(8, 1, '3', '1', 'SELF LEARN ENGLISH', 'learn english by yourself', 'english is the language blah blach', '2024-05-25 11:31:12', '2024-05-25 11:27:47', 1),
(9, 1, '1', '3', 'วันนี้ช้าาาาาาาา', 'มาช้า', 'มาก', '2024-05-25 16:50:27', '2024-05-25 12:52:34', 1);

-- --------------------------------------------------------

--
-- Table structure for table `request`
--

CREATE TABLE `request` (
  `id_request` int(11) NOT NULL,
  `user_request` int(11) NOT NULL,
  `category` text NOT NULL,
  `sub_category` text NOT NULL,
  `title` text NOT NULL,
  `descript` text NOT NULL,
  `content` text NOT NULL,
  `date_request` datetime NOT NULL DEFAULT current_timestamp(),
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `request`
--

INSERT INTO `request` (`id_request`, `user_request`, `category`, `sub_category`, `title`, `descript`, `content`, `date_request`, `status`) VALUES
(12, 1, '3', '1', 'SELF LEARN ENGLISH', 'learn english by yourself', 'english is the language blah blach', '2024-05-25 11:27:47', 0),
(13, 1, '8', '1', 'Beginner python programming', 'Learn python for FREE!', 'Python is the perfect language', '2024-05-25 11:35:36', 0),
(14, 1, '1', '3', 'วันนี้ช้าาาาาาาา', 'มาช้า', 'มาก', '2024-05-25 12:52:34', 0),
(15, 1, '11', '1', 'Study mindset', 'สวัสดีครับ/ค่ะ  วันนี้เราจะมาพูดถึงเรื่อง \"Growth Mindset\" ', 'ทำไม Growth Mindset ถึงสำคัญสำหรับการเรียนรู้?\r\nคนที่ยึดติดกับ \"Fixed Mindset\"  (mindset แบบหยุดนิ่ง)  เชื่อว่าความสามารถของตัวเองนั้น  \"ติดตัว  เปลี่ยนแปลงไม่ได้\"\r\nเวลาเจอปัญหา  หรืออุปสรรค  ก็จะรู้สึกท้อแท้  หมดกำลังใจ\r\nในทางกลับกัน  คนที่ยึดติดกับ \"Growth Mindset\"  เชื่อว่าความสามารถของตัวเองนั้น  \"สามารถพัฒนา  และเรียนรู้ได้ตลอดเวลา\"\r\nเวลาเจอปัญหา  หรืออุปสรรค  ก็จะมองเป็นโอกาสที่จะเรียนรู้  และพัฒนาตัวเอง  (\"เราเรียนรู้ได้  เราเก่งขึ้นได้\")\r\nเคล็ดลับฝึกฝน Growth Mindset\r\n\r\n   \r\nเปลี่ยนคำพูด: แทนที่จะพูดว่า \"เราทำไม่ได้\" ลองเปลี่ยนเป็น \"เราจะพยายามทำให้ได้\"\r\nมองความผิดพลาดเป็นบทเรียน: ทุกความผิดพลาดคือโอกาสที่จะเรียนรู้ และพัฒนาตัวเอง\r\nเฉลิมฉลองความพยายาม: ไม่ใช่แค่ผลลัพธ์ แต่ให้กำลังใจตัวเองสำหรับความพยายาม และความก้าวหน้า\r\nหาแรงบันดาลใจ: ศึกษาเรื่องราวของคนที่ประสบความสำเร็จ เพื่อเรียนรู้แนวคิด และวิธีการของพวกเขา\r\n\r\nตัวอย่าง\r\n   -Fixed Mindset: \"โจทย์นี้น่าเบื่อ เราทำไม่ได้หรอก\"\r\n   -Growth Mindset: \"โจทย์นี้น่าสนใจ ถึงจะยาก แต่เราลองคิดดู เราอาจจะเรียนรู้วิธี解题ใหม่ๆ ก็ได้\"\r\nMindset  เป็นสิ่งที่เราสามารถฝึกฝน  และเปลี่ยนแปลงได้  ลองปรับใช้ Growth Mindset  แล้วคุณจะค้นพบว่า  การเรียนรู้เป็นเรื่องที่สนุก  และท้าทายมากขึ้น!', '2024-05-25 15:31:56', 0),
(16, 1, '1', '1', 'test', 'test des', 'test con', '2024-05-25 15:37:17', 0);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `id_user` int(11) NOT NULL,
  `username` text NOT NULL,
  `email` text NOT NULL,
  `password` text NOT NULL,
  `verification_code` text NOT NULL,
  `email_verified_at` datetime DEFAULT NULL,
  `level` int(11) NOT NULL,
  `game_level` int(11) NOT NULL,
  `exp` int(11) NOT NULL,
  `point` int(11) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id_user`, `username`, `email`, `password`, `verification_code`, `email_verified_at`, `level`, `game_level`, `exp`, `point`, `status`) VALUES
(1, 'w', 'w@gmail.com', 'w', '1', '0000-00-00 00:00:00', 0, 3, 1, 11, 1),
(2, 'l', 'l@gmail.com', 'l', '1', NULL, 0, 3, 0, 0, 1),
(3, 'admin', 'admin@gmail.com', 'admin', 'admin', NULL, 0, 1, 0, 0, 2),
(4, '7', '7@gmail.com', '7', '7', NULL, 0, 2, 2, 0, 1),
(5, 'a', 'a@gmail.com', 'a', '0', NULL, 0, 1, 0, 0, 1);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `bought`
--
ALTER TABLE `bought`
  ADD PRIMARY KEY (`id_bought`);

--
-- Indexes for table `item`
--
ALTER TABLE `item`
  ADD PRIMARY KEY (`id_item`);

--
-- Indexes for table `nametag`
--
ALTER TABLE `nametag`
  ADD PRIMARY KEY (`id_nametag`);

--
-- Indexes for table `post`
--
ALTER TABLE `post`
  ADD PRIMARY KEY (`id_post`);

--
-- Indexes for table `request`
--
ALTER TABLE `request`
  ADD PRIMARY KEY (`id_request`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`id_user`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `bought`
--
ALTER TABLE `bought`
  MODIFY `id_bought` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `item`
--
ALTER TABLE `item`
  MODIFY `id_item` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `nametag`
--
ALTER TABLE `nametag`
  MODIFY `id_nametag` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `post`
--
ALTER TABLE `post`
  MODIFY `id_post` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT for table `request`
--
ALTER TABLE `request`
  MODIFY `id_request` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `id_user` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
--
-- Database: `phpmyadmin`
--
CREATE DATABASE IF NOT EXISTS `phpmyadmin` DEFAULT CHARACTER SET utf8 COLLATE utf8_bin;
USE `phpmyadmin`;

-- --------------------------------------------------------

--
-- Table structure for table `pma__bookmark`
--

CREATE TABLE `pma__bookmark` (
  `id` int(10) UNSIGNED NOT NULL,
  `dbase` varchar(255) NOT NULL DEFAULT '',
  `user` varchar(255) NOT NULL DEFAULT '',
  `label` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL DEFAULT '',
  `query` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Bookmarks';

-- --------------------------------------------------------

--
-- Table structure for table `pma__central_columns`
--

CREATE TABLE `pma__central_columns` (
  `db_name` varchar(64) NOT NULL,
  `col_name` varchar(64) NOT NULL,
  `col_type` varchar(64) NOT NULL,
  `col_length` text DEFAULT NULL,
  `col_collation` varchar(64) NOT NULL,
  `col_isNull` tinyint(1) NOT NULL,
  `col_extra` varchar(255) DEFAULT '',
  `col_default` text DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Central list of columns';

-- --------------------------------------------------------

--
-- Table structure for table `pma__column_info`
--

CREATE TABLE `pma__column_info` (
  `id` int(5) UNSIGNED NOT NULL,
  `db_name` varchar(64) NOT NULL DEFAULT '',
  `table_name` varchar(64) NOT NULL DEFAULT '',
  `column_name` varchar(64) NOT NULL DEFAULT '',
  `comment` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL DEFAULT '',
  `mimetype` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL DEFAULT '',
  `transformation` varchar(255) NOT NULL DEFAULT '',
  `transformation_options` varchar(255) NOT NULL DEFAULT '',
  `input_transformation` varchar(255) NOT NULL DEFAULT '',
  `input_transformation_options` varchar(255) NOT NULL DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Column information for phpMyAdmin';

-- --------------------------------------------------------

--
-- Table structure for table `pma__designer_settings`
--

CREATE TABLE `pma__designer_settings` (
  `username` varchar(64) NOT NULL,
  `settings_data` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Settings related to Designer';

-- --------------------------------------------------------

--
-- Table structure for table `pma__export_templates`
--

CREATE TABLE `pma__export_templates` (
  `id` int(5) UNSIGNED NOT NULL,
  `username` varchar(64) NOT NULL,
  `export_type` varchar(10) NOT NULL,
  `template_name` varchar(64) NOT NULL,
  `template_data` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Saved export templates';

-- --------------------------------------------------------

--
-- Table structure for table `pma__favorite`
--

CREATE TABLE `pma__favorite` (
  `username` varchar(64) NOT NULL,
  `tables` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Favorite tables';

-- --------------------------------------------------------

--
-- Table structure for table `pma__history`
--

CREATE TABLE `pma__history` (
  `id` bigint(20) UNSIGNED NOT NULL,
  `username` varchar(64) NOT NULL DEFAULT '',
  `db` varchar(64) NOT NULL DEFAULT '',
  `table` varchar(64) NOT NULL DEFAULT '',
  `timevalue` timestamp NOT NULL DEFAULT current_timestamp(),
  `sqlquery` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='SQL history for phpMyAdmin';

-- --------------------------------------------------------

--
-- Table structure for table `pma__navigationhiding`
--

CREATE TABLE `pma__navigationhiding` (
  `username` varchar(64) NOT NULL,
  `item_name` varchar(64) NOT NULL,
  `item_type` varchar(64) NOT NULL,
  `db_name` varchar(64) NOT NULL,
  `table_name` varchar(64) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Hidden items of navigation tree';

-- --------------------------------------------------------

--
-- Table structure for table `pma__pdf_pages`
--

CREATE TABLE `pma__pdf_pages` (
  `db_name` varchar(64) NOT NULL DEFAULT '',
  `page_nr` int(10) UNSIGNED NOT NULL,
  `page_descr` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='PDF relation pages for phpMyAdmin';

-- --------------------------------------------------------

--
-- Table structure for table `pma__recent`
--

CREATE TABLE `pma__recent` (
  `username` varchar(64) NOT NULL,
  `tables` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Recently accessed tables';

--
-- Dumping data for table `pma__recent`
--

INSERT INTO `pma__recent` (`username`, `tables`) VALUES
('root', '[{\"db\":\"learning_center\",\"table\":\"user\"},{\"db\":\"learning_center\",\"table\":\"request\"},{\"db\":\"learning_center\",\"table\":\"post\"},{\"db\":\"learning_center\",\"table\":\"nametag\"},{\"db\":\"learning_center\",\"table\":\"item\"},{\"db\":\"learning_center\",\"table\":\"bought\"},{\"db\":\"cinema\",\"table\":\"user\"},{\"db\":\"shopping\",\"table\":\"register\"},{\"db\":\"cinema\",\"table\":\"rating\"},{\"db\":\"cinema\",\"table\":\"movie\"}]');

-- --------------------------------------------------------

--
-- Table structure for table `pma__relation`
--

CREATE TABLE `pma__relation` (
  `master_db` varchar(64) NOT NULL DEFAULT '',
  `master_table` varchar(64) NOT NULL DEFAULT '',
  `master_field` varchar(64) NOT NULL DEFAULT '',
  `foreign_db` varchar(64) NOT NULL DEFAULT '',
  `foreign_table` varchar(64) NOT NULL DEFAULT '',
  `foreign_field` varchar(64) NOT NULL DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Relation table';

-- --------------------------------------------------------

--
-- Table structure for table `pma__savedsearches`
--

CREATE TABLE `pma__savedsearches` (
  `id` int(5) UNSIGNED NOT NULL,
  `username` varchar(64) NOT NULL DEFAULT '',
  `db_name` varchar(64) NOT NULL DEFAULT '',
  `search_name` varchar(64) NOT NULL DEFAULT '',
  `search_data` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Saved searches';

-- --------------------------------------------------------

--
-- Table structure for table `pma__table_coords`
--

CREATE TABLE `pma__table_coords` (
  `db_name` varchar(64) NOT NULL DEFAULT '',
  `table_name` varchar(64) NOT NULL DEFAULT '',
  `pdf_page_number` int(11) NOT NULL DEFAULT 0,
  `x` float UNSIGNED NOT NULL DEFAULT 0,
  `y` float UNSIGNED NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Table coordinates for phpMyAdmin PDF output';

-- --------------------------------------------------------

--
-- Table structure for table `pma__table_info`
--

CREATE TABLE `pma__table_info` (
  `db_name` varchar(64) NOT NULL DEFAULT '',
  `table_name` varchar(64) NOT NULL DEFAULT '',
  `display_field` varchar(64) NOT NULL DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Table information for phpMyAdmin';

-- --------------------------------------------------------

--
-- Table structure for table `pma__table_uiprefs`
--

CREATE TABLE `pma__table_uiprefs` (
  `username` varchar(64) NOT NULL,
  `db_name` varchar(64) NOT NULL,
  `table_name` varchar(64) NOT NULL,
  `prefs` text NOT NULL,
  `last_update` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Tables'' UI preferences';

-- --------------------------------------------------------

--
-- Table structure for table `pma__tracking`
--

CREATE TABLE `pma__tracking` (
  `db_name` varchar(64) NOT NULL,
  `table_name` varchar(64) NOT NULL,
  `version` int(10) UNSIGNED NOT NULL,
  `date_created` datetime NOT NULL,
  `date_updated` datetime NOT NULL,
  `schema_snapshot` text NOT NULL,
  `schema_sql` text DEFAULT NULL,
  `data_sql` longtext DEFAULT NULL,
  `tracking` set('UPDATE','REPLACE','INSERT','DELETE','TRUNCATE','CREATE DATABASE','ALTER DATABASE','DROP DATABASE','CREATE TABLE','ALTER TABLE','RENAME TABLE','DROP TABLE','CREATE INDEX','DROP INDEX','CREATE VIEW','ALTER VIEW','DROP VIEW') DEFAULT NULL,
  `tracking_active` int(1) UNSIGNED NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Database changes tracking for phpMyAdmin';

-- --------------------------------------------------------

--
-- Table structure for table `pma__userconfig`
--

CREATE TABLE `pma__userconfig` (
  `username` varchar(64) NOT NULL,
  `timevalue` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp(),
  `config_data` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='User preferences storage for phpMyAdmin';

--
-- Dumping data for table `pma__userconfig`
--

INSERT INTO `pma__userconfig` (`username`, `timevalue`, `config_data`) VALUES
('root', '2024-05-25 04:39:35', '{\"Console\\/Mode\":\"collapse\",\"NavigationWidth\":223}');

-- --------------------------------------------------------

--
-- Table structure for table `pma__usergroups`
--

CREATE TABLE `pma__usergroups` (
  `usergroup` varchar(64) NOT NULL,
  `tab` varchar(64) NOT NULL,
  `allowed` enum('Y','N') NOT NULL DEFAULT 'N'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='User groups with configured menu items';

-- --------------------------------------------------------

--
-- Table structure for table `pma__users`
--

CREATE TABLE `pma__users` (
  `username` varchar(64) NOT NULL,
  `usergroup` varchar(64) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin COMMENT='Users and their assignments to user groups';

--
-- Indexes for dumped tables
--

--
-- Indexes for table `pma__bookmark`
--
ALTER TABLE `pma__bookmark`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `pma__central_columns`
--
ALTER TABLE `pma__central_columns`
  ADD PRIMARY KEY (`db_name`,`col_name`);

--
-- Indexes for table `pma__column_info`
--
ALTER TABLE `pma__column_info`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `db_name` (`db_name`,`table_name`,`column_name`);

--
-- Indexes for table `pma__designer_settings`
--
ALTER TABLE `pma__designer_settings`
  ADD PRIMARY KEY (`username`);

--
-- Indexes for table `pma__export_templates`
--
ALTER TABLE `pma__export_templates`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `u_user_type_template` (`username`,`export_type`,`template_name`);

--
-- Indexes for table `pma__favorite`
--
ALTER TABLE `pma__favorite`
  ADD PRIMARY KEY (`username`);

--
-- Indexes for table `pma__history`
--
ALTER TABLE `pma__history`
  ADD PRIMARY KEY (`id`),
  ADD KEY `username` (`username`,`db`,`table`,`timevalue`);

--
-- Indexes for table `pma__navigationhiding`
--
ALTER TABLE `pma__navigationhiding`
  ADD PRIMARY KEY (`username`,`item_name`,`item_type`,`db_name`,`table_name`);

--
-- Indexes for table `pma__pdf_pages`
--
ALTER TABLE `pma__pdf_pages`
  ADD PRIMARY KEY (`page_nr`),
  ADD KEY `db_name` (`db_name`);

--
-- Indexes for table `pma__recent`
--
ALTER TABLE `pma__recent`
  ADD PRIMARY KEY (`username`);

--
-- Indexes for table `pma__relation`
--
ALTER TABLE `pma__relation`
  ADD PRIMARY KEY (`master_db`,`master_table`,`master_field`),
  ADD KEY `foreign_field` (`foreign_db`,`foreign_table`);

--
-- Indexes for table `pma__savedsearches`
--
ALTER TABLE `pma__savedsearches`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `u_savedsearches_username_dbname` (`username`,`db_name`,`search_name`);

--
-- Indexes for table `pma__table_coords`
--
ALTER TABLE `pma__table_coords`
  ADD PRIMARY KEY (`db_name`,`table_name`,`pdf_page_number`);

--
-- Indexes for table `pma__table_info`
--
ALTER TABLE `pma__table_info`
  ADD PRIMARY KEY (`db_name`,`table_name`);

--
-- Indexes for table `pma__table_uiprefs`
--
ALTER TABLE `pma__table_uiprefs`
  ADD PRIMARY KEY (`username`,`db_name`,`table_name`);

--
-- Indexes for table `pma__tracking`
--
ALTER TABLE `pma__tracking`
  ADD PRIMARY KEY (`db_name`,`table_name`,`version`);

--
-- Indexes for table `pma__userconfig`
--
ALTER TABLE `pma__userconfig`
  ADD PRIMARY KEY (`username`);

--
-- Indexes for table `pma__usergroups`
--
ALTER TABLE `pma__usergroups`
  ADD PRIMARY KEY (`usergroup`,`tab`,`allowed`);

--
-- Indexes for table `pma__users`
--
ALTER TABLE `pma__users`
  ADD PRIMARY KEY (`username`,`usergroup`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `pma__bookmark`
--
ALTER TABLE `pma__bookmark`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pma__column_info`
--
ALTER TABLE `pma__column_info`
  MODIFY `id` int(5) UNSIGNED NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pma__export_templates`
--
ALTER TABLE `pma__export_templates`
  MODIFY `id` int(5) UNSIGNED NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pma__history`
--
ALTER TABLE `pma__history`
  MODIFY `id` bigint(20) UNSIGNED NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pma__pdf_pages`
--
ALTER TABLE `pma__pdf_pages`
  MODIFY `page_nr` int(10) UNSIGNED NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pma__savedsearches`
--
ALTER TABLE `pma__savedsearches`
  MODIFY `id` int(5) UNSIGNED NOT NULL AUTO_INCREMENT;
--
-- Database: `shopping`
--
CREATE DATABASE IF NOT EXISTS `shopping` DEFAULT CHARACTER SET utf8 COLLATE utf8_unicode_ci;
USE `shopping`;

-- --------------------------------------------------------

--
-- Table structure for table `product`
--

CREATE TABLE `product` (
  `id_product` int(11) NOT NULL,
  `name_product` text NOT NULL,
  `amount_product` int(11) NOT NULL,
  `price_product` text NOT NULL,
  `date_product` text NOT NULL,
  `type_product` text NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `product`
--

INSERT INTO `product` (`id_product`, `name_product`, `amount_product`, `price_product`, `date_product`, `type_product`, `status`) VALUES
(1, 'aa33', 133, '133', 'aa33', 'aa33', 0),
(2, 'test', 2, '2', 'test', 'test', 0),
(3, 'yy', 11, '11', 'yy', 'yy', 0),
(4, 'asd', 0, '0', 'asd', 'asd', 0),
(5, 'asa', 0, '0', 'sad', 'asd', 0),
(6, 'yuppy', 30, '1000 baht', '13/06/55', 'furniture', 1),
(7, 'aSsd', 11, '221', '36/20/58', 'sadsasd', 1),
(8, 'yy6', 226, '226', '3/25/6666', 'ggg6', 1),
(9, 'YAAAAAAAAA', 1, '1', 'TAAA', 'FFF', 0),
(10, 'อร่อย', 44, '44', 'อร่อยมาก', 'อร่อยสุดๆO.o', 1),
(11, '', 0, '', '', '', 0);

-- --------------------------------------------------------

--
-- Table structure for table `register`
--

CREATE TABLE `register` (
  `id_user` int(11) NOT NULL,
  `user` varchar(1000) NOT NULL,
  `pass` varchar(1000) NOT NULL,
  `full_name` varchar(1000) NOT NULL,
  `email` varchar(1000) NOT NULL,
  `tel` varchar(1000) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `register`
--

INSERT INTO `register` (`id_user`, `user`, `pass`, `full_name`, `email`, `tel`, `status`) VALUES
(1, '12', '12', '12', '12', '12', 1),
(3, 'y', 'y', 'y', 'y', 'y', 1),
(4, 'o', 'o', 'o', 'o', 'o', 1),
(5, '1', '1', '1', '1', '1', 0),
(6, 'o', 'o', 'o', 'o', 'o', 1),
(7, 'n2', 'n2', 'n2', 'n2', 'n2', 1),
(8, 'yu', 'yup2', 'yuf2', 'yue2', 'yut2', 0),
(9, 'test2', 'testp2', 'testf2', 'teste2', 'testt2', 1),
(10, 'yu', 'yup2', 'yu', 'yu', 'yu', 0),
(11, 'yu', 'yup', 'poryu', 'yue', 'yut', 0);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `product`
--
ALTER TABLE `product`
  ADD PRIMARY KEY (`id_product`);

--
-- Indexes for table `register`
--
ALTER TABLE `register`
  ADD PRIMARY KEY (`id_user`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `product`
--
ALTER TABLE `product`
  MODIFY `id_product` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;

--
-- AUTO_INCREMENT for table `register`
--
ALTER TABLE `register`
  MODIFY `id_user` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;
--
-- Database: `test`
--
CREATE DATABASE IF NOT EXISTS `test` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `test`;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
