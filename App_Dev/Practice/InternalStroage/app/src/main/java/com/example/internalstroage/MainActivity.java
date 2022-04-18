package com.example.internalstroage;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.nio.charset.StandardCharsets;

public class MainActivity extends AppCompatActivity {
    Button save,load;
    EditText et;
    TextView tv;
    String data;
    private  String file="My Data";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        save = findViewById(R.id.save);
        load = findViewById(R.id.load);
        et = findViewById(R.id.et);
        tv = findViewById(R.id.tv);

        save.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                data=et.getText().toString();
                try{
                    FileOutputStream fout=openFileOutput(file, Context.MODE_PRIVATE);
                    fout.write(data.getBytes());
                    fout.close();
                    Toast.makeText(MainActivity.this, "File Saved", Toast.LENGTH_SHORT).show();
                }
                catch(Exception e){
                    e.printStackTrace();
                }
            }
        });

        load.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try {
                    FileInputStream fin = openFileInput(file);
                    int c;
                    String temp = "";
                    while ((c = fin.read()) != -1) {
                        temp = temp + Character.toString((char) c);
                    }
                    tv.setText(temp);
                    Toast.makeText(MainActivity.this, "File Read", Toast.LENGTH_SHORT).show();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }

        });
    }
}