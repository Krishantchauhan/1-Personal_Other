package com.example.arrayadapter;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.net.Uri;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import java.lang.reflect.Array;

public class MainActivity extends AppCompatActivity {

    EditText et;
    TextView tv;
    Button insert,del,fetch;
    SQLiteDatabase db;

    String qry="";
    Cursor c;
    String name="";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et = findViewById(R.id.et);
        tv = findViewById(R.id.tv);

        insert = findViewById(R.id.insert);
        del = findViewById(R.id.del);
        fetch = findViewById(R.id.fetch);

        db=openOrCreateDatabase("database",MODE_PRIVATE,null);
        db.execSQL("create table if not exists stud1(Name varchar(200) not null)");

        insert.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String qry ="insert into stud1 values('"+et.getText().toString()+"')";
                db.execSQL(qry);
                Toast.makeText(MainActivity.this, "Data Inserted", Toast.LENGTH_SHORT).show();
            }
        });

        fetch.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                qry="select * from stud1";
                try{
                    c=db.rawQuery(qry,null);
                    int row=c.getCount();
                    if(row==0)
                      Toast.makeText(MainActivity.this, "NO Data Found", Toast.LENGTH_SHORT).show();
                    else
                    {
                        c.moveToFirst();
                        name=c.getString(0);
                        tv.setText(name);
                        Toast.makeText(MainActivity.this, "Data Found", Toast.LENGTH_SHORT).show();
                    }
                }
                catch (Exception e){
                    Toast.makeText(MainActivity.this, "Exeception Occured", Toast.LENGTH_SHORT).show();
                }
            }
        });


        del.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try{
                    qry="delete from stud1 where name='"+et.getText()+"'";
                    db.execSQL(qry);
                    Toast.makeText(MainActivity.this, " Data Deleted", Toast.LENGTH_SHORT).show();
                }
                catch (Exception e){
                    Toast.makeText(MainActivity.this, "Exeception Occured", Toast.LENGTH_SHORT).show();
                }
            }
        });

    }
}