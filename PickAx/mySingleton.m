//
//  mySingleton.m
//  PickAx
//
//  Created by Jon Howell on 07/02/2017.
//  Copyright © 2017 Manchester Metropolitan University - ESS - essmobile. All rights reserved.
//

#import "mySingleton.h"

static mySingleton * sharedSingleton = nil;

@implementation mySingleton {
}

// eg::: @synthesize offset;
@synthesize
currentBackgroundColour,
blockSize,
showTime,
start,
startTime,
finish,
waitTime,
messageTime,
oldSubjectName,
subjectName,
testerName,
testDate,
testTime,
okGoNow,
resultStrings,      //string
resultStringRows,   //array

email,
forwardTestDirection,
blockRotation,
onScreenInfo,
dataReady,          //if there is data to display in the table YES bool

displayStrings,     //result item
displayStringRows,  //array

displayStringsTitle,//result title
displayStringTitles;//array

#pragma mark -
#pragma mark Singleton Methods

+ (mySingleton *) sharedSingleton {
    if(sharedSingleton  == nil) {
        sharedSingleton = [[super allocWithZone:NULL]init];
    }
    return sharedSingleton;
}

+(id)allocWithZone:(NSZone *)zone {
    return [self sharedSingleton];
}

- (id)copyWithZone:(NSZone *) zone {
    return self;
}

- (id) init {
    if(self = [super init]) {
        //only runs if no data or first run to give default values
        
        currentBackgroundColour  = [UIColor blackColor];
        okGoNow             = NO; // App will not run unless set to YES
        start                = 3;
        finish               = 9;
        blockSize            = 45.00;
        waitTime             = 500;
        startTime            = 500;
        showTime             = 500;
        messageTime          = 1000; //for on screen instructions and messages in time interval delay
        blockRotation        = YES;
        onScreenInfo         = YES;
        dataReady            = NO;
        forwardTestDirection = YES;
        resultStrings        = @"";
        displayStrings       = @"";
        resultStringRows     = [[NSMutableArray alloc]initWithObjects: @"",nil]; //clear the arrays of any data
        displayStringRows    = [[NSMutableArray alloc]initWithObjects: @"",nil];
        displayStringTitles  = [[NSMutableArray alloc]initWithObjects: @"",nil];
        email                = @"me@mmu.ac.uk";
    }
    return self;
}
@end

