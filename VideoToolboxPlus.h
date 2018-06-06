//
//  VideoToolboxPlus.h
//  VideoToolboxPlus
//
//  Created by Stefan Fochler on 06.06.18.
//  Copyright © 2018 McZonk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>

//! Project version number for VideoToolboxPlus.
FOUNDATION_EXPORT double VideoToolboxPlusVersionNumber;

//! Project version string for VideoToolboxPlus.
FOUNDATION_EXPORT const unsigned char VideoToolboxPlusVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <VideoToolboxPlus/PublicHeader.h>

#import "NSError+VTPError.h"

#import "VTPCompressionSession.h"
#import "VTPCompressionSession+Properties.h"
#import "VTPCompressionSession+PropertiesFromDictionary.h"
