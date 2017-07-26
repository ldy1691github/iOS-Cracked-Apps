//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSDictionary, NSString;

@interface AHHyperlinkScanner : NSObject <NSFastEnumeration>
{
    NSDictionary *m_urlSchemes;
    NSString *m_scanString;
    _Bool m_strictChecking;
    unsigned long long m_scanLocation;
    unsigned long long m_scanStringLength;
}

+ (_Bool)isStringValidURI:(id)arg1 usingStrict:(_Bool)arg2 fromIndex:(unsigned long long *)arg3 withStatus:(int *)arg4;
+ (id)strictHyperlinkScannerWithString:(id)arg1;
+ (id)hyperlinkScannerWithString:(id)arg1;
+ (void)initialize;
- (_Bool)_scanString:(id)arg1 charactersFromSet:(id)arg2 intoRange:(struct _NSRange *)arg3 fromIndex:(unsigned long long *)arg4;
- (_Bool)_scanString:(id)arg1 upToCharactersFromSet:(id)arg2 intoRange:(struct _NSRange *)arg3 fromIndex:(unsigned long long *)arg4;
- (struct _NSRange)_longestBalancedEnclosureInRange:(struct _NSRange)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)setScanLocation:(unsigned int)arg1;
- (unsigned long long)scanLocation;
- (id)linkifiedHTML;
- (id)allURIs;
- (id)nextURI;
- (_Bool)isValidURI;
- (void)dealloc;
- (id)initWithString:(id)arg1 usingStrictChecking:(_Bool)arg2;

@end
