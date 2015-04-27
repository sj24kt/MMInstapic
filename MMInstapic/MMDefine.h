//
//  MMDefine.h
//  MMInstapic
//
//  Created by Sherrie Jones on 4/23/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

#ifdef MMDEFINES
#define MMDEFINES 1
#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

@import Foundation;

#endif

@import UIKit;

#pragma mark - Parse
extern NSString *const MM_PARSE_APPLICATION_ID;
extern NSString *const MM_PARSE_CLIENT_KEY;

#pragma mark - Instagram
extern NSString *const MM_INSTAPIC_CLIENT_ID;
extern NSString *const MM_INSTAPIC_CLIENT_SECRET;












