SELECT DISTINCT movies.title
FROM movies
JOIN stars AS bradley_stars ON movies.id = bradley_stars.movie_id
JOIN people AS bradley ON bradley_stars.person_id = bradley.id
JOIN stars AS jennifer_stars ON movies.id = jennifer_stars.movie_id
JOIN people AS jennifer ON jennifer_stars.person_id = jennifer.id
WHERE bradley.name = 'Bradley Cooper'
  AND jennifer.name = 'Jennifer Lawrence';
