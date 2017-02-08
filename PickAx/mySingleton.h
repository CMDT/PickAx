//
//  mySingleton.h
//  PickAx
//
//  Created by Jon Howell on 07/02/2017.
//  Copyright © 2017 Manchester Metropolitan University - ESS - essmobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface mySingleton : NSObject {
    // add all the objects that you want to be globally abailable here:
    
    //eg::: int offset;
    UIColor * currentBackgroundColour;
    
    int   start;
    int   finish;
    
    float blockSize;
    float waitTime;
    float startTime;
    float showTime;
    float messageTime;
    
    BOOL forwardTestDirection;
    BOOL blockRotation;
    BOOL onScreenInfo;
    BOOL okGoNow; //flag that App can run

    BOOL dataReady;
    
    NSString * oldSubjectName;
    NSString * subjectName;
    NSString * testerName;
    NSString * testDate;
    NSString * testTime;
    NSString * email;
    NSString * resultStrings;
    NSString * displayStrings;
    NSString * displayStringsTitle;
    
    NSMutableArray * resultStringRows;//for Excel and data csv format
    NSMutableArray * displayStringRows;//for screen display formatted to look nice
    NSMutableArray * displayStringTitles;
}

@property (nonatomic, retain) UIColor * currentBackgroundColour;
@property (nonatomic) BOOL      okGoNow;
@property (nonatomic) int       start;
@property (nonatomic) int       finish;

@property (nonatomic) float     blockSize; // values of options
@property (nonatomic) float     waitTime;
@property (nonatomic) float     startTime;
@property (nonatomic) float     showTime;
@property (nonatomic) float     messageTime;

@property (nonatomic) BOOL      forwardTestDirection; //options flags for switches
@property (nonatomic) BOOL      blockRotation;
@property (nonatomic) BOOL      onScreenInfo;
@property (nonatomic) BOOL      dataReady;

@property (nonatomic,retain) NSString * oldSubjectName;
@property (nonatomic,retain) NSString * subjectName;
@property (nonatomic,retain) NSString * testerName;
@property (nonatomic,retain) NSString * email;
@property (nonatomic,retain) NSString * resultStrings;
@property (nonatomic,retain) NSString * displayStrings;
@property (nonatomic,retain) NSString * displayStringsTitle;
@property (nonatomic,retain) NSString * testDate;
@property (nonatomic,retain) NSString * testTime;

@property (nonatomic,retain) NSMutableArray * resultStringRows;    //for the Excel formatted text, csv
@property (nonatomic,retain) NSMutableArray * displayStringRows;   //for the result string, one row per item
@property (nonatomic,retain) NSMutableArray * displayStringTitles; //for the title label for the result, one per item/row  title:item of result

//set up singleton shared
+(mySingleton *)sharedSingleton;

@end

