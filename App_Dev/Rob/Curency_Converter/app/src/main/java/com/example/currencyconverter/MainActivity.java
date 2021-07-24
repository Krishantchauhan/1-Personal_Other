package com.example.currencyconverter;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @SuppressLint("DefaultLocale")
    public void convert(View view){
        EditText dollarAmt = findViewById(R.id.dollarAmt);

        double dollarAmtdouble = Double.parseDouble(dollarAmt.getText().toString());

        Double rs = dollarAmtdouble * 74.52;

        Toast.makeText(MainActivity.this,"₹" + String.format("%.2f",rs),Toast.LENGTH_SHORT).show();

        Log.i("amount",dollarAmt.getText().toString());


    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}