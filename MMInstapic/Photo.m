//
//  Photo.m
//  MMInstapic
//
//  Created by Sherrie Jones on 4/20/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

#import "Photo.h"

@implementation Photo

@dynamic caption;
@dynamic user;
@dynamic imageFile;
@dynamic likes;
@dynamic comments;
@dynamic imageData;
@dynamic likeCount;

+ (void)load {
    [self registerSubclass];
}

+ (NSString *)parseClassName {
    return @"Photo";
}

@end













