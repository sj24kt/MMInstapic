//
//  CommentViewController.h
//  MMInstapic
//
//  Created by Sherrie Jones on 4/23/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

@import UIKit;
@import Parse;
#import "Photo.h"

@interface CommentViewController : UIViewController

@property UIImage *image;
@property PFObject *userImage;
@property PFObject *username;
@property Photo *photo;

@end




















