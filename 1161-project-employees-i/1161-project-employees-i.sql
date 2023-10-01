select distinct p.project_id, ROUND(AVG(e.experience_years),2) as average_years
from Employee e 
inner join Project p 
ON p.employee_id = e.employee_id
group by p.project_id;
