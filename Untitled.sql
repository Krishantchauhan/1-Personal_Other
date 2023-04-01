select email from customer
where first_name='Nancy' and last_name='Thomas';



select description from film
where title='Outlaw Hanky';


select phone from address
where address='259 Ipoh Drive';

select first_name from customer
order by first_name desc;

select payment_date from payment
order by payment_date
limit 10;

select * from payment
where amount not between 8 and 9;



select min(replacement_cost) from film;
select max(replacement_cost) from film;

select avg(replacement_cost) from film;

select round(avg(replacement_cost),2) from film;

select sum(replacement_cost) from film;


//Group By








