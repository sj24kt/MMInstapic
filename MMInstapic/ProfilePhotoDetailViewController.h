//
//  ProfilePhotoDetailViewController.h
//  MMInstapic
//
//  Created by Sherrie Jones on 4/24/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

@import UIKit;
#import "Photo.h"

@interface ProfilePhotoDetailViewController : UIViewController

@property Photo *photo;
@property PFObject *selected;

@end
