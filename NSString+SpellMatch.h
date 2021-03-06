//
//  NSString+SpellMatch.h
//  
//
//  Created by white on 2019/3/7.
//  Copyright © 2019 white. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>


@interface NSString (SpellMatch)
/**
 matching string result
 
 @param matchString string that will be use to match
 @return matching string result. return nil if none
 */
- (nullable NSString *)spellMatch:(NSString *_Nullable)matchString;

/**
  full matching string result
 
 @param matchString string that will be used to match
 @return matching string result. return nil if none
 To search "中国" in "中国人民"， you need input full pinying: zhongguo, or pinyin first letter: zg.
 */
- (nullable NSString *)fullSpellMatch:(NSString *_Nullable)matchString;

/// matching string result array
/// @param matchString string that will be used to match
/// @return matching string result array. return nil if none
- (nullable NSArray <__kindof NSString *> *)spellsMatch:(nullable NSString *)matchString;


/// matching string result array.
/// @param matchString  string that will be used to match
/// @return An array.  Array element is a NSDictionay object. Each object is a NSString object, value is a NSValue object(every object is NSValue actually)
- (nullable NSArray <__kindof NSDictionary *> *)spellsWithRangeValuesMatch:(nullable NSString *)matchString;

@end
