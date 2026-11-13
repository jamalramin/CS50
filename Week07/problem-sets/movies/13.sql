-- 13. Names of all people who starred in a movie in which Kevin Bacon also starred
FROM movies
JOIN stars AS bradley_stars ON movies.id = bradley_stars.movie_id
JOIN people AS bradley ON bradley_stars.person_id = bradley.id
JOIN stars AS jennifer_stars WHERE bradley.name = 'Bradley Cooper'
  AND jennifer.name = 'Jennifer Lawrence';
